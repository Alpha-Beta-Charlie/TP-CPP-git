#pragma once
#include <iostream>
#include "Menu.h"
# include "voirImage.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
class Filtre
{
public:
	Filtre();
	cv::Mat FiltreGaussien(cv::Mat _image);
	cv::Mat FiltreMedian(cv::Mat _image);
};

