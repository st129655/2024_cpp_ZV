#include<iostream>
#define N 1000

int main(int argc, char* argv[]) {
	int n = 0;
	int z = 0;
	int x = 0;
	scanf_s("%d", &n);
	int a[N] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &x);
	int v = 0;
	for (int c = 0; c < n; ++c) {
		if (a[c] == x) {
			v++;
		}
	}
	printf("%d", v);
	return EXIT_SUCCESS;
}