#include <iostream>
#include <vector>
using namespace std;


struct Matrix {
    vector<vector<double>> matrix;
    int rows;
    int columns;
};


Matrix buildZeroMatrix(int rows, int columns) {
    Matrix result;
    result.rows = rows;
    result.columns = columns;
    result.matrix.resize(rows, vector<double>(columns, 0.0));
    return result;
}


Matrix buildMatrix(const vector<vector<double>>& array) {
    Matrix result;
    result.rows = array.size();
    result.columns = (array.size() > 0) ? array[0].size() : 0;
    result.matrix = array;
    return result;
}


Matrix multiplyMatrices(const Matrix& matrix1, const Matrix& matrix2) {
    if (matrix1.columns != matrix2.rows) {
        cerr << "Error: Matrix multiplication conditions not satisfied." << endl;
        return buildZeroMatrix(0, 0);
    }

    Matrix result = buildZeroMatrix(matrix1.rows, matrix2.columns);

    for (int i = 0; i < matrix1.rows; ++i) {
        for (int j = 0; j < matrix2.columns; ++j) {
            for (int k = 0; k < matrix1.columns; ++k) {
                result.matrix[i][j] += matrix1.matrix[i][k] * matrix2.matrix[k][j];
            }
        }
    }

    return result;
}


void printMatrix(const Matrix& matrix) {
    for (int i = 0; i < matrix.rows; ++i) {
        for (int j = 0; j < matrix.columns; ++j) {
            cout << matrix.matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    vector<vector<double>> arrayA = { {1.9, 2.1, 3.5}, {3.2, -1.0, -5.0}, {4.4, 5.6, 7.6}, {5.0, -0.3, 8.4} };
    vector<vector<double>> arrayB = { {7.0, -6.0}, {2.0, -3.8}, {-2.9, 4.6} };

    Matrix matrixA = buildMatrix(arrayA);
    Matrix matrixB = buildMatrix(arrayB);

    Matrix resultMatrix = multiplyMatrices(matrixA, matrixB);

    cout << "Matrix A:" << endl;
    printMatrix(matrixA);

    cout << "\nMatrix B:" << endl;
    printMatrix(matrixB);

    cout << "\nProduct of A and B:" << endl;
    printMatrix(resultMatrix);

    return 0;
}