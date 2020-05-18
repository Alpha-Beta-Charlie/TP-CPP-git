#include "Modèle.h"

int MAX_KERNEL_LENGTH = 31;
View vuemd;
using namespace cv;
using namespace std;
Modèle::Modèle()
{
}

void Modèle::FiltreGaussien(cv::Mat _image) {
    Mat inter;
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2) {
        GaussianBlur(_image, inter, Size(i, i), 0, 0);
    }
    vuemd.voirIm(inter, "Image modifier avec filtre Gaussien");
    
}
void Modèle::FiltreMedian(cv::Mat _image) {
    Mat inter;
    medianBlur(_image, inter, 15);
    vuemd.voirIm(inter, "Image modfifer avec filtre Median");
}

void Modèle::calculSobel(cv::Mat _image) {
    Mat inter3;
    Sobel(_image, inter3, 5, 5, 3, 5, 0, BORDER_DEFAULT);

}


void Modèle::Dilatation() {
    Mat inter;


}

void Modèle::Erosion() {
    Mat inter;

}
void Modèle::Canny() {
    Mat inter;
    

}
void Modèle::OperationSeuillage() {
    Mat inter;

}
void Modèle::SegmentationRegion() {
    Mat inter;

}
