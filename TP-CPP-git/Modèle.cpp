#include "Mod�le.h"

int MAX_KERNEL_LENGTH = 31;
View vuemd;
using namespace cv;
using namespace std;
Mod�le::Mod�le()
{
}

//------------------------------------------------------------------------------------------------------------//

void AfficherImage(cv::Mat originale) {                                       // Si l'utulisateur tape 1.
    vuemd.voirIm(originale, "Image originale");
}

//------------------------------------------------------------------------------------------------------------//

void Mod�le::FiltreGaussien(cv::Mat originale) {                                       // Si l'utulisateur tape 2,2.
    Mat inter;
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2) {
        GaussianBlur(originale, inter, Size(i, i), 0, 0);
    }
    vuemd.voirIm(inter, "Image modifier avec filtre Gaussien");
}
void Mod�le::FiltreMedian(cv::Mat originale) {                                       // Si l'utulisateur tape 2,1.
    Mat inter;
    medianBlur(originale, inter, 15);
    vuemd.voirIm(inter, "Image modifier avec filtre Median");
}

//------------------------------------------------------------------------------------------------------------//

void Mod�le::calculSobel(cv::Mat originale) {                                       // Si l'utulisateur tape 3.
    Mat inter;
    Sobel(originale, inter,-1, 1, 0, 3,1, 0, BORDER_DEFAULT);
    vuemd.voirIm(inter, "Image modifier avec calcule de gradien");
}

//------------------------------------------------------------------------------------------------------------//

void Mod�le::Dilatation(cv::Mat originale) {                                       // Si l'utulisateur tape 4,1.
    Mat inter;
    int element_shape = MORPH_RECT;
    int n = 0;
    int an = abs(n);
    Mat element = getStructuringElement(element_shape, Size(an * 2 + 1, an * 2 + 1), Point(an, an));
    dilate(originale, inter, element);
    vuemd.voirIm(inter, "Image modifier avec une dilatation");
}

void Mod�le::Erosion(cv::Mat originale) {                                       // Si l'utulisateur tape 4,2.
    Mat inter;
    int element_shape = MORPH_RECT;
    int n = 0;
    int an = abs(n);
    Mat element = getStructuringElement(element_shape, Size(an * 2 + 1, an * 2 + 1), Point(an, an));
    erode(originale, inter, element);
    vuemd.voirIm(inter, "Image modifier avec une erosion");
}

//------------------------------------------------------------------------------------------------------------//

void Mod�le::Canny(cv::Mat originale) {                                       // Si l'utulisateur tape 5.
    Mat inter;
    

}

//------------------------------------------------------------------------------------------------------------//

void Mod�le::OperationSeuillage(cv::Mat originale) {                                       // Si l'utulisateur tape 6,1.
    Mat inter;


}
void Mod�le::SegmentationRegion(cv::Mat originale) {                                       // Si l'utulisateur tape 6,2.
    Mat inter;


}

//------------------------------------------------------------------------------------------------------------//