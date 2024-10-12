#include<iostream>
#define N 100
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a[N];
	int p[N];
	int b[N];
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &p[i]);
	}
	for (int i = 0; i < n; ++i) {
		b[i] = a[i] * p[i];
	}
	int max = -100;
	int ind = 0;
	for (int i = 0; i < n; ++i) {
		if (b[i] > max) {
			ind = i + 1;
			max = b[i];
		}
	}
	printf("%d", ind);
	return EXIT_SUCCESS;
}