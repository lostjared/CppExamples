#include<iostream>
#include"ac.h"

int main(int argc, char **argv) {
    cv::VideoCapture cap(0);
    if(!cap.isOpened()) {
        std::cerr << "Error could not open webcam.\n";
        exit(EXIT_FAILURE);
    }
    bool active = true;
    cv::namedWindow("AC");
    std::cout << "press lowercase q to quit!\n";
    std::cout << "value of filter 15: " << ac::draw_strings[15] << "\n";
    while(active) {
        cv::Mat m;
        if(!cap.read(m)) {
            std::cerr << "No more frames, End of file..\n";
            exit(EXIT_SUCCESS);
        }
        ac::Bitwise_XOR(m); // filter from ac.h
        cv::imshow("AC", m);
        if(cv::waitKey(10) == 'q') {
            exit(EXIT_SUCCESS);
        }
    }
	return 0;
}
