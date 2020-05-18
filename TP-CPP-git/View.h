#pragma once
#include <iostream>
#include "controlleur.h"
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

class View
{
public:
	View();
	void affichageMenu();
	void affichageMenuFlitrage();
	void affichageMenuOperationMorphologieMath();
	void affichageMenuSegmentationImage();
	int reChoix();
	int reMenu();
	void voirIm(cv::Mat _image, std::string _nom);

};


