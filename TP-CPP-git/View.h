#pragma once
#include <iostream>
# include "controlleur.h"
#include "Filtre.h"
#include "Derivation.h"
class View
{
public:
	View();
	void affichageMenu();
	void affichageMenuFlitrage();
	void affichageMenuOperationMorphologieMath();
	void affichageMenuSegmentationImage();
	std::string AdresseIm;
	cv::Mat partage;
	void voirIm(cv::Mat _image, std::string _nom);
	cv::Mat Choisir();
	int reChoix();
	int reMenu();
};


