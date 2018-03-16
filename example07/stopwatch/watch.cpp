#include "watch.hpp"

namespace watch {

    void SystemClock::start() {
        start_time = std::chrono::system_clock::now();
    }
    void SystemClock::stop() {
        stop_time = std::chrono::system_clock::now();
    }
    void SystemClock::echo(std::string name) {
        std::cout << "Timer for " << name << " was active for: " << std::chrono::duration_cast<std::chrono::milliseconds>(stop_time-start_time).count() << " milliseconds\n";
        
    }
    unsigned long SystemClock::timePassed() {
        auto n = std::chrono::system_clock::now();
        return std::chrono::duration_cast<std::chrono::milliseconds>(n-start_time).count();
    }
    
    void HighResClock::start() {
        start_time = std::chrono::high_resolution_clock::now();
    }
    
    void HighResClock::stop() {
        stop_time = std::chrono::high_resolution_clock::now();
    }
    void HighResClock::echo(std::string n) {
        std::cout << "Timer for: " << n << " was active for: " << std::chrono::duration_cast<std::chrono::nanoseconds>(stop_time-start_time).count() << " nanoseconds\n";
    }
    unsigned long HighResClock::timePassed() {
        auto n = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::nanoseconds>(n-start_time).count();
    }
    
}
