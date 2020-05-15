#include "Derivation.h"


cv::Mat Derivation::calculSobel(cv::Mat _image) {
    Mat inter3;
    Sobel(_image, inter3, 5, 5, 3, 5, 0, BORDER_DEFAULT);
    return inter3;

}
