#include<iostream>
#include<opencv2\opencv.hpp>
#include<highgui.h>
int main(int argc, char* argv[])
{
	IplImage* src = cvCreateImage(cvSize(640, 480), 8, 3);
	cvLine(src, cvPoint(1, 100), cvPoint(638, 100), cvScalar(255, 255, 255), 2, 2);
	cvLine(src, cvPoint(638, 100), cvPoint(200, 478), cvScalar(255, 255, 255), 2, 2);
	cvLine(src, cvPoint(200, 478), cvPoint(319, 1), cvScalar(255, 255, 255), 2, 2);
	cvLine(src, cvPoint(319, 1), cvPoint(400, 478), cvScalar(255, 255, 255), 2, 2);
	cvLine(src, cvPoint(400, 478), cvPoint(1, 100), cvScalar(255, 255, 255), 2, 2);
	cvNamedWindow("src", 1);
	cvShowImage("src", src);
	cvWaitKey(0);
	return 0;
}