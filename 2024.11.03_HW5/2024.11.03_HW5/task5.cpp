#include<iostream>
int main(int argc,char* argv[]) {
	int n = 0;
	int zov = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		std::cin >> *(a + i);
	}
	int z = 0;
	while (z < n) {
		int max = *(a + z);
		int v = z;
		for (int i = z + 1; i < n; ++i) {
			if (*(a + i) > max) {
				max = *(a + i);
				v = i;
			}
		}
		zov += max * (v - z + 1);
		z = v + 1;
	}
	std::cout << zov;
	return EXIT_SUCCESS;
}
