#pragma once
#include <iostream>
# include "voirImage.h"
#include "Filtre.h"
#include "Derivation.h"
class View
{
public:

	void affichageMenu();
	void affichageMenuFlitrage();
	void affichageMenuOperationMorphologieMath();
	void affichageMenuSegmentationImage();
	std::string AdresseIm;
	cv::Mat partage;
	void voirIm(cv::Mat _image, std::string _nom);
	cv::Mat Choisir();
};


