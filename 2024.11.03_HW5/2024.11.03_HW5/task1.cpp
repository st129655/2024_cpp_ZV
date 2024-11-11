#include<iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int z = 0;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d",a + i);
		if (*(a+i) == 1) {
			z = i;
		}
	}
	for (int i = z; i < n; ++i) {
		std::cout << *(a+i) << " ";
	}
	for (int i = 0; i < z; ++i) {
		std::cout << *(a+i) << " ";
	}
	free(a);
	return EXIT_SUCCESS;
}