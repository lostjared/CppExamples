#include<iostream>
#include<cstdlib>
#include<opencv2/opencv.hpp>

int main(int argc, char **argv) {
    
    if(argc != 2) {
        std::cerr << "Requires one argument of video file..\n";
        exit(EXIT_FAILURE);
    }
    
    cv::VideoCapture cap(argv[1]);

    if(!cap.isOpened()) {
        std::cerr << "Error could not open capture device..\n";
        exit(EXIT_FAILURE);
    }
    
    cv::namedWindow("opencv");
    
    bool active = true;
    while(active) {
        cv::Mat frame;
        cap >> frame;
        cv::imshow("opencv", frame);
        if(cv::waitKey(10) == 'e') exit(0);
    }

    return 0;
}
