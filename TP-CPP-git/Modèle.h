#pragma once
#include "controlleur.h"
#include "View.h"
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
class Modèle
{
public:
	Modèle();
	void FiltreGaussien(cv::Mat _image);
	void FiltreMedian(cv::Mat _image);
	void calculSobel(cv::Mat _image);
	void Dilatation();
	void Erosion();
	void Canny();
	void OperationSeuillage();
	void SegmentationRegion();
};

