#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/core.hpp>
#include <string>

using namespace cv;
using namespace std;



int main(int argc, char** argv)
{
    printf("hello ocv\n");
    
    cv::Mat input_img = cv::imread("./input.jpg");
    if(!input_img.data)
    {
	cout<<"read input image error!"<<endl;
	return -1;
    }

    float scale = 0.5;
    Size output_size = Size(input_img.cols*scale, input_img.rows*scale);

    cv::Mat output_img = cv::Mat(output_size, input_img.type());


    //resize(input_img, output_img, output_size, CV_INTER_CUBIC);
    cv::resize(input_img, output_img, output_size, 2);
    cv::imwrite("./output.jpg",output_img);
    
    return 1;


}
