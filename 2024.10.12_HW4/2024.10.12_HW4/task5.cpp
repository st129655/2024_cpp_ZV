#include<iostream>
#include<cmath>
#define N 1000
int main(int argc, char* argv[]) {
	int n = 0;
	int x = 0;
	scanf_s("%d", &n);
	int a[N];
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	int z = a[0];
	scanf_s("%d", &x);
	int diff = abs(a[0] - x);
	for (int i = 1; i < n; ++i) {
		int curr_diff = abs(a[i] - x);
		if (curr_diff < diff || (curr_diff == diff && a[i] < z)) {
			diff = curr_diff;
			z = a[i];
		}
	}
	printf("%d", z);
	return EXIT_SUCCESS;
}