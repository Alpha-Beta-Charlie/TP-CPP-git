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
	void AfficherImage(cv::Mat originale);

	void FiltreGaussien(cv::Mat originale,int type);

	void FiltreMedian(cv::Mat originale,int type);

	void calculSobel(cv::Mat originale);

	void Dilatation(cv::Mat& originale, int type);

	void Erosion(cv::Mat originale, int type);

	void canny(cv::Mat originale,int type);

	void OperationSeuillage(cv::Mat originale, int type);

	void SegmentationRegion(cv::Mat originale);
};

