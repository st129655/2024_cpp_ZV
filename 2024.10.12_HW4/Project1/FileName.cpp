#include<iostream>
#define N 1000
int main(int argc, char* argv[]) {
	int n = 0;
	int x = 0;
	scanf_s("%d", &n);
	int a[N];
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &x);
	int max = 1001;
	int min = -1001;
	int z = 0;
	for (int i = 0; i < n; ++i) {
		if (min < a[i] && a[i] <= x) {
			min = a[i];
		} else if (max > a[i] && a[i] >= x) {
			max = a[i];
		}
	}
	if (max - x == 0 || x - min == 0) {
		z = x;
	} else  if (max - x < x - min) {
		z = max;
	} else {
		z = min;
	}
	printf("%d", z);
	return EXIT_SUCCESS;
}