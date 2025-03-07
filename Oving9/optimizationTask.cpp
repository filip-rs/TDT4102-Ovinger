#include "Stopwatch.h"
#include <vector>
#include <iostream>

// Utdelt program til oppgave 3

// BEGIN 3b
double sumMatrix(std::vector<std::vector<double>> matrix){ 
    double sum = 0;
    for (int row = 0; row < matrix.size(); row++){
        for (int col = 0; col < matrix.size(); col++){
            // fjerner at vi initialiserer en unødvending mellomvariabel
            sum += matrix.at(row).at(col);
        }
    }
    return sum;
}

void setDiagonalValue(std::vector<std::vector<double>>& matrix, double newValue){
    // Endrer funksjonen for å lage diagonale verdier, reduserer mengden kode uten å fjerne funksjonalitet
    for (int row = 0; row < matrix.size(); row++){
        matrix.at(row).at(row) = newValue;
    }
}

void optimizationTask(){
    Stopwatch stopwatch;
    stopwatch.start();
    const int matrixSize = 10000;

    // Oppretter nullmatrisen direkte ved bruk av konstruktøren som tar inn antall og verdi.
    std::vector<std::vector<double>> matrix(matrixSize, std::vector<double>(matrixSize, 0.0));

    // Setter alle elementer på diagonalen til 0.41
    setDiagonalValue(matrix, 0.41);
    
    // Summerer alle elementene i matrisen
    double total = sumMatrix(matrix);

    std::cout << "TDT" << total + 2 << std::endl;

    std::cout << "Time taken: " << stopwatch.stop() << "seconds" << std::endl;
}
// END 3b