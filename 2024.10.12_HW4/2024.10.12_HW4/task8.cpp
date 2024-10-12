#include<iostream>
#define N 1000
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int m = 0;
	int a = 0;
	int b = 0;
	int goyda[N];
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &goyda[i]);
	}
	scanf_s("%d", &m);
	for (int i = 0; i < m; ++i) {
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		for (int i = a - 1; i <= b - 1; ++i) {
			printf("%d ", goyda[i]);
		}
	}printf("\n");
	return EXIT_SUCCESS;
}