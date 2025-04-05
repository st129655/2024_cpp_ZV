#include<iostream>
void transposeMatrix(int** matrix, int** matrixT, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrixT[j][i] = matrix[i][j];
        }
    }
}
int main(int argc, char* argv[]) {
    int dim = 0;
    std::cin >> dim;
    int rows = dim;
    int cols = dim;
    if (dim == 0) {
        std::cout << "NO";
        return 0;
    }
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int** Transpose = new int* [rows];
    for (int i = 0; i < cols; ++i) {
        Transpose[i] = new int[rows];
    }
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][i] != 0) {
            std::cout << "NO";
            return 0;
        }
    }
    transposeMatrix(matrix, Transpose, rows, cols);
    int** res = new int* [rows];
    for (int i = 0; i < cols; ++i) {
        res[i] = new int[rows];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            res[i][j] = matrix[i][j] - Transpose[i][j];
        }
    }
    int sign = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (res[i][j] != 0) {
                sign++;
                break;
            }
        }
    }
    if (sign != 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}