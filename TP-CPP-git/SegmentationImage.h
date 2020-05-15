#pragma once
#include "Menu.h"
class SegmentationImage
{
public:
	cv::Mat OperationSeuillage();
	cv::Mat SegmentationRegion();
};

