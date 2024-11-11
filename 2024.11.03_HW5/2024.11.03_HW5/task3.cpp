#include<iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int z = 0;
	int v = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 != 0) {
			std::cout << *(a + i) << " ";
			v += 1;
		}
	}
	std::cout << "\n";
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 0) {
			std::cout << a[i] << " ";
			z += 1;
		}
	}
	std::cout << "\n";
	if (z >= v) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	free(a);
	return EXIT_SUCCESS;
}