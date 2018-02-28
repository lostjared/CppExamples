#include<iostream>
#include<fstream>
#include<string>
#include<chrono>
#include<thread>
#include<cstdlib>

int main(int argc, char **argv) {
    
    if(argc != 2) {
        std::cerr << "Error requires one argument..\n";
        exit(EXIT_FAILURE);
    }
    
    std::fstream input;
    input.open("main.cpp", std::ios::in);
    if(!input.is_open()) {
        std::cerr << "Error Could not find main.cpp\n";
        exit(EXIT_FAILURE);
    }

    int mill = atoi(argv[1]);

    while(!input.eof()) {
        std::string text;
        std::getline(input, text);
        if(input) {
            for(auto start = text.begin(); start != text.end(); ++start) {
                std::cout << *start;
                fflush(stdout);
                std::this_thread::sleep_for(std::chrono::milliseconds(mill));
            }
            std::cout << "\n";
        }
    }
    input.close();
    return 0;
}
