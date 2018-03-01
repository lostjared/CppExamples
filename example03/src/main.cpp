#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>



void swapTabSpace(std::istream &in, std::ostream &out, int tabs=4);


int main(int argc, char **argv) {
    if(argc != 2) {
        std::cerr << "Error requires one argument..\n";
        exit(EXIT_FAILURE);
    }
    int num = atoi(argv[1]);
    if(num > 0) {
        swapTabSpace(std::cin, std::cout, num);
    }
    return 0;
}

void swapTabSpace(std::istream &in, std::ostream &out, int tabs) {
    std::string t;
    for(int i = 0; i < tabs; i++)
        t += " ";
    
    while(!in.eof()) {
        char c = in.get();
        if(in) {
            if(c == '\t') {
                out << t;
            } else {
                out << c;
            }
        }
    }
}
