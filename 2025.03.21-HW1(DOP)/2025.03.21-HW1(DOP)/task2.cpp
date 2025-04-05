#include<iostream>
#include<set>
int main(int argc, char* argv[]) {
	std::set<int> a;
	int rows = 0;
	int cols = 0;
	std::cin >> rows;
	cols = rows;
	int M;
	std::cin >> M;
	int i, j = 0;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			matrix[i][j] = 0;
		}
	}
	for (int g = 0; g < M; ++g) {
		std::cin >> i >> j;
		matrix[i - 1][j - 1] = 1;
	}
	std::cout << rows << "\n";
	int count = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (matrix[i][j] == 1) {
				count++;
				a.insert(j + 1);
			}
		}
		std::cout << count << " ";
		for (int n : a) {
			std::cout << n << " ";
		}
		count = 0;
		if (i != rows - 1) {
			std::cout << "\n";
		}
		for (int i = 0; i <= rows; ++i) {
			a.erase(i);
		}
	}
	return 0;
}