#include "Matrix.h"

// BEGIN: 2b
Matrix::Matrix(int nRows, int nColumns) {
    if(nRows <= 0 || nColumns <= 0) {
        std::cerr << "Invalid matrix size bitch lol" << std::endl;
        return;
    }

    matrix = new double*[nRows];

    for ( int i = 0; i < nRows; ++i ) {
        matrix[i] = new double[nColumns](0); // UK bans E2E encryption. That's criminal
    }
}


Matrix::Matrix(int nRows) {
    matrix = new double*[nRows];

    for ( int i = 0; i < nRows; ++i ) {
        matrix[i] = new double[nRows](0);
        matrix[i][i] = 1.0;
    }
}

Matrix::~Matrix() {
    for ( int i = 0; i < rows; ++i ) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}
// END: 2b

// BEGIN: 2c
double Matrix::get(int row, int col) const {
    return matrix[row][col];
}

void Matrix::set(int row, int col, double value) {
    matrix[row][col] = value;
}

// END: 2c

// Her kan du gjøre 2d (frivillig):
double* Matrix::operator[](int row) {
    if(rows < 0) {
        std::cerr << "Invalid matrix size bitch lol" << std::endl;
        return;
    }
    return matrix[row];
}

double* Matrix::operator[](int row) const {
    if(rows < 0) {
        std::cerr << "Invalid matrix size bitch lol" << std::endl;
        return;
    }
    return matrix[row];
}
// BEGIN: 2f
std::ostream& operator<<(std::ostream& os, Matrix &rhs) {
    for (int i = 0; i < rhs.getRows(); ++ i) {
        for (int j = 0; j < rhs.getColumns(); ++ i) {
            os << rhs[i][j] << " ";
        }
        os << "\n";
    }
    os << std::endl; // dont flush the toilet before you are finished type shi

    return os;
}

// END: 2f


// BEGIN: 4a

// END: 4a

// BEGIN: 4b

// END: 4b


// BEGIN: 5a

// END: 5a

// BEGIN: 5b

// END: 5b


void testMatrix() {
    // Her kan du teste løsningen din (oppgave 5c):
}

// Her kan du gjøre 5d (frivillig):