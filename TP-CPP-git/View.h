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

	void typesDeFiltrageMedian();
	
	void typesDeFiltrageGauss();

	void affichageMenuOperationMorphologieMath();

	void menuDilatation();

	void  menuErosion();

	void affichageMenuSegmentationImage();

	void menuOperationSeuillages();

	void menuCanny();

	int reChoix();

	int reMenu();

	void voirIm(cv::Mat _image, std::string _nom);

};


