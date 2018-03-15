#include<iostream>
#include"watch.hpp"

void testFunc() {
    watch::StopWatch<watch::HighResClock> clock("testFunc");
    char value[3];
    for(unsigned int i = 0; i < (1920*1080)*4; ++i) {
        value[0] = value[1] = rand()%255;
    }
}

int main(int argc, char **argv) {
    
    testFunc();
    
    
    return 0;
}
