#include "Filtre.h"
using namespace std;
using namespace cv;



Filtre::Filtre()
{}

cv::Mat Filtre::FiltreGaussien(cv::Mat _image) {
    Mat inter1;
    for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2) {
        GaussianBlur(_image, inter1, Size(i, i), 0, 0);
    }
    return inter1;
}
cv::Mat Filtre::FiltreMedian(cv::Mat _image) {
    Mat inter2;
    medianBlur(_image, inter2, 15);
    return inter2;
}

