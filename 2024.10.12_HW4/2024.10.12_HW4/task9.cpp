#include<iostream>
#define N 100
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int x = 0;
	int z = 1;
	int a[N];
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i) {
		if (a[i] >= x) {
			z += 1;
		}
		else {
			break;
		}
	}
	printf("%d", z);
	return EXIT_SUCCESS;
}