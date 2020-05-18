#include "Mod�le.h"

int MAX_KERNEL_LENGTH = 31;
View vuemd;
using namespace cv;
using namespace std;
Mod�le::Mod�le()
{
}

void Mod�le::FiltreGaussien(cv::Mat _image) {
    Mat inter;
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2) {
        GaussianBlur(_image, inter, Size(i, i), 0, 0);
    }
    vuemd.voirIm(inter, "Image modifier avec filtre Gaussien");
    
}
void Mod�le::FiltreMedian(cv::Mat _image) {
    Mat inter;
    medianBlur(_image, inter, 15);
    vuemd.voirIm(inter, "Image modfifer avec filtre Median");
}

void Mod�le::calculSobel(cv::Mat _image) {
    Mat inter3;
    Sobel(_image, inter3, 5, 5, 3, 5, 0, BORDER_DEFAULT);

}


void Mod�le::Dilatation() {
    Mat inter;


}

void Mod�le::Erosion() {
    Mat inter;

}
void Mod�le::Canny() {
    Mat inter;
    

}
void Mod�le::OperationSeuillage() {
    Mat inter;

}
void Mod�le::SegmentationRegion() {
    Mat inter;

}
