#include<iostream>
#define N 1000
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a[N];
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	int p = 0;
	int p1 = 0;
	int ind = 0;
	scanf_s("%d", &p);
	scanf_s("%d", &p1);
	int max = -1001;
	for (p = p - 1; p < p1; ++p) {
		if (a[p] > max) {
			max = a[p];
			ind = p + 1;
		}
	}
	printf("%d ", max);
	printf("%d ", ind);
	return EXIT_SUCCESS;
}