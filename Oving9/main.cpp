#include "Stopwatch.h"
#include "measurePerformance.h"
#include "optimizeVector.h"
#include "optimizationTask.h"
#include "templatefunctions.h"
#include "MyArray.h"



int main() {
    // Oppgave 1
    // double timer1 = measurePerformanceUnique();
    // std::cout << "unique_ptr: " << timer1 << std::endl;
    // double timer2 = measurePerformanceShared();
    // std::cout << "shared_ptr: " << timer2 << std::endl;
    // double timer3 = measurePerformanceStack();
    // std::cout << "stack_alloc: " << timer3 << std::endl;
    // double timer4 = measurePerformanceHeap();
    // std::cout << "heap_alloc: " << timer4 << std::endl;

    // Oppgave 2
    //testVector();
    optimizeVector();

    // Oppgave 3
    // optimizationTask();

    // Oppgave 4
    // testTemplateFunctions();
    
    // Oppgave 5
    //testMyArray();
    return 0;
}