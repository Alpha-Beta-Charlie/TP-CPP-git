#pragma once
# include <opencv2/opencv.hpp>
# include <iostream>

class voirImage
{
public:

	std::string AdresseIm;
	cv::Mat partage;
	 void voirIm(cv::Mat _image, std::string _nom);
	 cv::Mat Choisir();
};

