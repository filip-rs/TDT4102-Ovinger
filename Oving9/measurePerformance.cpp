#include "Stopwatch.h"
#include <memory>
#include <array>
#include <iostream>


// BEGIN 1a
constexpr int size = 1000000.0;

double measurePerformanceUnique() {
    Stopwatch stopwatch;
    stopwatch.start();

    for (int i = 0; i < size; ++i) {
        std::unique_ptr v = std::make_unique<int>(10);
    }

    return stopwatch.stop() / size;
}

double measurePerformanceShared() {
    Stopwatch stopwatch;
    stopwatch.start();

    for (int i = 0; i < size; ++i) {
        std::shared_ptr v = std::make_shared<int>(10);
    }

    return stopwatch.stop() / size;
}

double measurePerformanceStack() {
    Stopwatch stopwatch;
    stopwatch.start();

    for (int i = 0; i < size; ++i) {
        std::array<int, size> arr1;
    }

    return stopwatch.stop() / size;
}

double measurePerformanceHeap() {
    Stopwatch stopwatch;
    stopwatch.start();

    for (int i = 0; i < size; ++i) {
        std::array<int, size>* arr2 = new std::array<int, size>;
        delete arr2;
    }

    return stopwatch.stop() / size;
}
// END 1a