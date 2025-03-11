#pragma once
#include <iostream>
#include <exception>

// BEGIN 5a
template<typename Type, int Size>
// END 5a
class MyArray
{
    private:
        // BEGIN 5b
        Type elements[Size];

        // END 5b
    public:
        // BEGIN 5c
        int getSize() {
            return static_cast<int>(Size);

        }

        Type& at(int index) {
            if (! (index < Size) || index < 0) {
                throw std::runtime_error("Index out of range");
            }

            return elements[index];
        }

        void fill(Type filler) {
            for (int i = 0; i < Size; ++i) {
                elements[i] = filler;
            }
        }
        // END 5c
};

// BEGIN 5d
void testMyArray();
// END 5d