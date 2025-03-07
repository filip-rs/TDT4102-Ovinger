#pragma once
#include <random>
#include <iostream>
#include <string>
#include <vector>

// BEGIN 4a
template<typename MX>
MX maximum(MX num1, MX num2) {
    if (num1 >= num2) {
        return num1;
    } else {
        return num2;
    }
}
// END 4a

// BEGIN 4b
template<typename RNG>
void shuffle(std::vector<RNG>& vec) {
    std::random_device rd;
    std::default_random_engine engine(rd());

    int rng_num;
    std::uniform_int_distribution<int> randgen(0, vec.size() - 1);
    for (int i = 0; i < vec.size(); ++i) {
        rng_num = randgen(engine);
        std::swap(vec.at(i), vec.at(rng_num));
    }
}
// END 4b

void testTemplateFunctions();