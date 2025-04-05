#include<iostream>
int main(int argc, char* argv[]) {
	int dim = 0;
	std::cin >> dim;
	int rows = dim;
	int cols = dim;
	int M = 0;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
			if (matrix[i][j] == 1) {
				M++;
			}
		}
	}
	std::cout << dim << " " << M << "\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (matrix[i][j] == 1) {
				std::cout << i+1 << " " << j+1 <<"\n";
			}
		}
	}
	return 0;
}