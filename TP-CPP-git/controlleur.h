
#pragma once
#include <iostream>
#include "View.h"
# include <opencv2/opencv.hpp>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
class controlleur
{
private:
	int menu;
	int choix;
public:
	controlleur();
	void setmenu(int _menu);
	void setchoix(int _choix);
	void instruction();
};

