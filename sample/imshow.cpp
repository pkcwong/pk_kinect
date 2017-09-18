#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	cv::Mat img = cv::imread("./res/logo.png");
	cv::imshow("imshow", img);
	cv::waitKey(0);
}
