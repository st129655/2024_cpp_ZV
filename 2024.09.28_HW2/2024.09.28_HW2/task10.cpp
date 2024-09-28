#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int z = 0;
	int v = 0;
	scanf_s("%d", &n);
	if (n % 5 == 0) {
		z = n / 5;
	}
	else if (n % 5 == 1) {
		z = (n - 6) / 5;
		v = 2;
	}
	else if (n % 5 == 2) {
		z = (n - 12) / 5;
		v = 4;
	}
	else if (n % 5 == 3) {
		z = (n - 3) / 5;
		v = 1;
	}
	else if (n % 5 == 4) {
		z = (n - 9) / 5;
		v = 3;
	}
	printf("%d %d", z, v);
	return EXIT_SUCCESS;
}