#ifndef __STOPWATCH__H__
#define __STOPWATCH__H__

#include<iostream>
#include<chrono>
#include<string>

namespace watch {
    
    class SystemClock {
    public:
        SystemClock() = default;
        void start();
        void stop();
        void echo(std::string name);
        unsigned long timePassed();
    private:
        std::chrono::system_clock::time_point start_time, stop_time;
    };
    
    class HighResClock {
    public:
        HighResClock() = default;
        void start();
        void stop();
        void echo(std::string n);
        unsigned long timePassed();
    private:
        std::chrono::high_resolution_clock::time_point start_time, stop_time;
    };
    
    template<typename Clock>
    class StopWatch {
    public:
        explicit StopWatch(std::string name);
        ~StopWatch();
        
        void start(std::string name);
        void stop();
        void echo(std::string name);
        unsigned long timePassed();
        
    private:
        Clock clock_interface;
        std::string time_name;
    };
    
    
    template<typename Clock>
    StopWatch<Clock>::StopWatch(std::string name) : time_name(name) {
        start(name);
    }
    
    template<typename Clock>
    StopWatch<Clock>::~StopWatch() {
        stop();
    }
    
    template<typename Clock>
    void StopWatch<Clock>::echo(std::string n) {
        clock_interface.echo(n);
    }
    
    template<typename Clock>
    void StopWatch<Clock>::start(std::string name) {
        time_name = name;
        clock_interface.start();
    }
    
    template<typename Clock>
    void StopWatch<Clock>::stop() {
        clock_interface.stop();
        echo(time_name);
    }
    
    template<typename Clock>
    unsigned long StopWatch<Clock>::timePassed() {
        return clock_interface.timePassed();
    }
}
    
#endif

