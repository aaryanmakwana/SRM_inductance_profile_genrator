#include <iostream>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

int main() {
  //image = newMat(1000,1000);
  cv::Mat img(1000,1000, CV_8UC3, Scalar(255,255,255));

  Point start = Point(250,250);
  Point end = Point(750,750);



  cv::line(img,start,end,Scalar(12,20,0),2,LINE_AA);
  cv::namedWindow("PROFILE",WINDOW_AUTOSIZE);
  cv::imshow("PROFILE", img);
  cv::waitKey(0);

  cv::destroyAllWindows();

  return 0;
}
