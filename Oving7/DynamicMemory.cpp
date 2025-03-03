#include <cassert>
#include <iostream>

#include "DynamicMemory.h"

// BEGIN: 1a
void fillInFibonacciNumbers(int* result, int length) {
    int num_1 = 0;
    int num_2 = 1;
    int num_tmp;

    result[0] = num_1;
    result[1] = num_2;

    for ( int i = 2; i < length; ++i ) {
        result[i] = num_1 + num_2;
        num_tmp = num_1;
        num_1 = num_2;
        num_2 += num_tmp;
    }
}
// END: 1a


// BEGIN: 1b
void printArray(int* array, int length) {
    using namespace std;

    for ( int i = 0; i < length; ++i ) {
        cout << array[i] << " ";
    }
    cout << endl;

}
// END: 1b


// BEGIN: 1c
void createFibonacci() {
    using namespace std;
    // 1. Spør brukeren hvor mange tall som skal genereres
    int length;
    cout << "Hvor mange tall vil du generere i fibonacci rekken? ";
    cin >> length;

    // 2. Alloker minne til en tabell som er stor nok til tallrekka
    int* tallrekke = new int[length] {};

    // 3. Fylle tabellen med fillInFibonacciNumbers()
    fillInFibonacciNumbers(tallrekke, length);

    // 4. Skriv ut resultatet til skjerm med printArray()
    printArray(tallrekke, length);

    // 5. Frigjør minnet du har reservert
    delete[] tallrekke;
    tallrekke = nullptr;
}
// END: 1c
