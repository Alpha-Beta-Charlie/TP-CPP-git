
#pragma once
#include <iostream>
#include "View.h"
#include "Modèle.h"
#include <opencv2/opencv.hpp>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
class controlleur
{
private:
	cv::Mat image;
	int menu;
	int choix;
public:
	controlleur(cv::Mat _image);
	void setmenu(int _menu);
	void instruction();
};

