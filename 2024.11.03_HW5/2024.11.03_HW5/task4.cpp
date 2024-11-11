#include<iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int s = 0;
	for (int i = 0; i < n; ++i) { // GOOOOOOOOOOOOOOOOOOOAl
		if (*(a + i) > 0) {
			s += *(a + i);
		}
	}
	int max = -9999999999;
	int min = 9999999999;
	int ind1 = 0;
	int ind2 = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > max) {
			max = *(a + i);
			ind2 = i;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (*(a + i) < min) {
			min = *(a + i);
			ind1 = i;
		}
	}
	long long zov = 1;
	if (ind1 > ind2) {
		int u = ind1;
		ind1 = ind2;
		ind2 = u;
	}
	for (int i = ind1 + 1; i < ind2; ++i) {
		zov *= *(a + i);
	}

	printf("%d ", s);
	printf("%d", zov);
	free(a);
	return EXIT_SUCCESS;
}