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
			std::cin >> matrix[i][j];
		}
	}
	int s = 0;
	for (int j = 0; j < dim; ++j) {
		for (int i = 0; i < dim; ++i) {
			if (matrix[j][i] == 1) {
				s++;
			}
		}
		std::cout << s << " ";
		s = 0;
	}
	return 0;
}