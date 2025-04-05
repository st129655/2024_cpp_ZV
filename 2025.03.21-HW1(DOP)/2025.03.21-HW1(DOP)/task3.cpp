#include<iostream>
int main(int argc, char* argv[]) {
	int dim = 0;
	std::cin >> dim;
	int rows = dim;
	int cols = dim;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			matrix[i][j] = 0;
		}
	}
	int i, j;
	for (int g = 0; g < rows; ++g) {
		std::cin >> i;
		if (i != 0) {
			for (int a = 0; a < i; ++a) {
				std::cin >> j;
				matrix[g][j - 1] = 1;
			}
		}
	}
	std::cout << rows << "\n";
	for (int p = 0; p < rows; ++p) {
		for (int o = 0; o < rows; ++o) {
			std::cout << matrix[p][o] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}