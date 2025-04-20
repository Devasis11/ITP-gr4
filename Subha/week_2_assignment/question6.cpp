#include <iostream>
using namespace std;

void inputMatrix(int mat[3][3]) {
    cout << "Enter 9 elements for the matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];
}

void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}

void transposeMatrix(int mat[3][3], int transposed[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            transposed[j][i] = mat[i][j];
}

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = mat1[i][j] + mat2[i][j];
}

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3], trans1[3][3], trans2[3][3], trans_sum[3][3];

    cout << "Enter elements for first matrix:\n";
    inputMatrix(mat1);
    
    cout << "Enter elements for second matrix:\n";
    inputMatrix(mat2);

    addMatrices(mat1, mat2, sum);
    transposeMatrix(mat1, trans1);
    transposeMatrix(mat2, trans2);
    addMatrices(trans1, trans2, trans_sum);

    cout << "\nSum of matrices:\n"; printMatrix(sum);
    cout << "\nTranspose of first matrix:\n"; printMatrix(trans1);
    cout << "\nTranspose of second matrix:\n"; printMatrix(trans2);
    cout << "\nSum of transposed matrices:\n"; printMatrix(trans_sum);

    return 0;
}