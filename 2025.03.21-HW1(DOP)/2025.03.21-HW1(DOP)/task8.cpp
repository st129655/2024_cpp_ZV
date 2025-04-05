#include <iostream>
int main(int argc, char* argv[]) {
	int dim = 0;
	std::cin >> dim;

	int matrix[100][100];
	for (int i = 0; i < dim; ++i) {
		for (int j = 0; j < dim; ++j) {
			std::cin >> matrix[i][j];
		}
	}

	int stok[100];
	int istok[100];
	int stokcount = 0;
	int istokcount = 0;
	for (int i = 0; i < dim; ++i) {
		bool is_source = true;
		bool is_sink = true;

		for (int j = 0; j < dim; ++j) {
			if (matrix[j][i] == 1) { 
				is_source = false;
			}
			if (matrix[i][j] == 1) { 
				is_sink = false;
			}
		}

		if (is_source) {
			stok[stokcount++] = ++i;
		}
		if (is_sink) {
			istok[istokcount++] = ++i;
		}
	}
	std::cout << stokcount;
	for (int i = 0; i < stokcount; ++i) {
		std::cout << " " << stok[i];
	}

	std::cout << istokcount;
	for (int i = 0; i < istokcount; ++i) {
		std::cout << " " << istok[i];
	}
	return 0;
}