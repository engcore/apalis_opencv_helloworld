#include <stdlib.h>
#include <stdio.h>


#include <opencv2/core/core.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"


using namespace std;


int main(int argc, char *argv[])
{

	cv::Mat img = cv::imread ("data/toradex_engcore.jpg", CV_LOAD_IMAGE_COLOR);
	cv::namedWindow ("helloworld", CV_WINDOW_AUTOSIZE);
	

	imshow ("helloworld", img);
	cv::waitKey ();

	img.release();
	
	cv::destroyAllWindows();
	
	return 0;
}

