#include "Stopwatch.h"
#include "optimizeVector.h"
#include <vector>
#include <iostream>


// BEGIN 2a
void testVector() {
    std::vector<int> vec;
    vec.reserve(20);
    std::cout << "Size: " << vec.size() << "\n";
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    for (int i = 0; i < 20; ++i) {
        vec.push_back(i);
        std::cout << "Size: " << vec.size() << "\n";
        std::cout << "Capacity: " << vec.capacity() << std::endl;
    }
}
// END 2a


void optimizeVector(){
    // BEGIN 2d
    Stopwatch timer;
    timer.start();
    std::vector<int> vec;

    for (int i = 0; i < 1000000; ++i) {
        vec.push_back(i);
    }
    double time_taken = timer.stop();
    
    std::cout << "Oppgave 2d: " << time_taken << std::endl;
    // END 2d

    // BEGIN 2e
    timer.start();
    std::vector<int> vec_2;
    vec_2.reserve(1000000);

    for (int i = 0; i < 1000000; ++i) {
        vec.push_back(i);
    }
    time_taken = timer.stop();
    
    std::cout << "Oppgave 2e: " << time_taken << std::endl;
    // END 2e   
}