#include<iostream>

int main(int argc, char* argv[]) {
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;
	long long x = -101;
	scanf_s("%lld", &a);
	scanf_s("%lld", &b);
	scanf_s("%lld", &c);
	scanf_s("%lld", &d);
	while (x <= 100) {
		x += 1;
		long long  z = a * x * x * x + b * x * x + c * x + d;
		if (z == 0) {
			printf("%lld ", x);
		}

	}
	return EXIT_SUCCESS;
}