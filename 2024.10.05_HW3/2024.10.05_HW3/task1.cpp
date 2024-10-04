#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int m = 0;
	scanf_s("%d", &n);
	while (c < n) {
		scanf_s("%d", &m);
		c++;
		if (m == 1) {
			a += 1;
		}
		else {
			b += 1;
		}
	}
	if (a >= b) {
		printf("%d", b);
	}
	else {
		printf("%d", a);
	}
	return EXIT_SUCCESS;
}