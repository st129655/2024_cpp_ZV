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
	int** matrix = new int* [dim];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			matrix[i][j] = 0;
		}
	}
	int** matrixT = new int* [dim];
	for (int i = 0; i < rows; ++i) {
		matrixT[i] = new int[cols];
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			matrixT[i][j] = 0;
		}
	}
	int count = 0;
	std::cin >> count;
	int i, j = 0;
	for (int g = 0; g < count; ++g) {
		std::cin >> i >> j;
		matrix[i - 1][j - 1] = 1;
	}
	transposeMatrix(matrix, matrixT, rows, cols);
	int** res = new int* [rows];
	for (int i = 0; i < cols; ++i) {
		res[i] = new int[rows];
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			res[i][j] = matrix[i][j] + matrixT[i][j];
		}
	}
	int n = 0;
	for (int i = 0; i < rows - 1; ++i) {
		n++;
		for (int j = n; j < rows; ++j) {
			if (res[i][j] == 0) {
				std::cout << "NO";
				return 0;
			}
		}
	}
	std::cout << "YES";
	return 0;
}