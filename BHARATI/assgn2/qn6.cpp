// Write a C++ program that takes two 2D arrays (matrices) of size
// 3×3 as input from the user. First, the program should calculate and
// print the sum of the two original matrices. After that, it should compute
// the transpose of both the original matrices. Finally, the program
// should calculate and display the sum of the two transposed matrices
// as well
#include<iostream>
using namespace std;

// Function to input a 3x3 matrix
void inputMatrix(int matrix[3][3], string name) {
    cout << "Enter elements of Matrix " << name << " (3x3):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << name << "[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to print a 3x3 matrix
void printMatrix(int matrix[3][3], string name) {
    cout << name << ":\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to calculate the sum of two 3x3 matrices
void sumMatrix(int A[3][3], int B[3][3], int result[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to compute transpose of a 3x3 matrix
void transposeMatrix(int original[3][3], int transposed[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

int main() {
    int A[3][3], B[3][3];
    int sum[3][3], transA[3][3], transB[3][3], transSum[3][3];

    // Input matrices
    inputMatrix(A, "A");
    inputMatrix(B, "B");

    // Sum of original matrices
    sumMatrix(A, B, sum);
    cout << "\nSum of Matrix A and Matrix B:\n";
    printMatrix(sum, "A + B");

    // Transpose both matrices
    transposeMatrix(A, transA);
    transposeMatrix(B, transB);

    cout << "\nTranspose of Matrix A:\n";
    printMatrix(transA, "Transpose A");

    cout << "\nTranspose of Matrix B:\n";
    printMatrix(transB, "Transpose B");

    // Sum of transposed matrices
    sumMatrix(transA, transB, transSum);
    cout << "\nSum of Transposed Matrices (Transpose A + Transpose B):\n";
    printMatrix(transSum, "Transpose A + B");

    return 0;
}

