#include "MyArray.h"

// BEGIN 5d
void testMyArray() {
    MyArray<std::string, 5> arr1;
    MyArray<int, 4> arr2;
    MyArray<double, 8> arr3;

    std::cout << "Size of arr1: " << arr1.getSize() << "\n";
    std::cout << "Size of arr2: " << arr2.getSize() << "\n";
    std::cout << "Size of arr3: " << arr3.getSize() << std::endl;

    std::cout << "Attempting to fill arr1: \n";
    arr1.fill("teststring");
    std::cout << "Attempting to fill arr2: \n";
    arr2.fill(10);
    std::cout << "Attempting to fill arr3: \n";
    arr3.fill(12.34);
    
    try {
        //std::cout << arr1.at(2) << std::endl;
        std::cout << arr1.at(10) << std::endl; // This should throw an exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << "\n";
    }

    try {
        std::cout << arr2.at(2) << std::endl;
        std::cout << arr2.at(10) << std::endl; // This should throw an exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << "\n";
    }

    try {
        std::cout << arr3.at(2) << std::endl;
        std::cout << arr3.at(10) << std::endl; // This should throw an exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << "\n";
    }
}
// END 5d