#include<iostream>
#define N 1000
int main(int argc, char* argv[]) {
	int n = 0;
	int a[N];
	int c = 0;
	scanf_s("%d", &n);
	n = n + 2;
	for (int i = 0; i < n - 2; ++i) {
		scanf_s("%d", &a[i]);
	}
	for (int i = n - 2; i < n; ++i) {
		if (i == n - 2) {
			a[i] = a[0];
		}
		else {
			a[i] = a[1];
		}
	}
	for (int i = 0; i < n; ++i) {
		if (n - i == 1) {
			c = a[i];
		}
	}
	int max = 0;
	for (int i = 1; i < n - 1; ++i) {
		int b = a[i] + a[i - 1] + a[i + 1];
		if (b > max) {
			max = b;
		}
	}
	printf("%d", max);

	return EXIT_SUCCESS;
}