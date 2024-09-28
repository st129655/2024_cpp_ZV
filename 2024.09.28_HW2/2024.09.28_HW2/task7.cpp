#include<iostream>
#include<cmath>

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	int a = 0;
	int s = 0;
	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	if (k > n) {
		s = m * 2;
	}
	else if (n % k == 0) {
		s = m * 2 * (n / k);
	}
	else if (((n % k) <= k / 2) && (n / k >= 2)) {
		s = m * 2 * ((n / k) - 1);
		s = s + ((m * 2 * 2 * 3) / 4);
	}
	else if ((n % k) <= k / 2) {
		s = ((m * 2 * 2 * 3) / 4);
	}
	else {
		s = m * 2 * (n / k) + m * 2;
	}
	printf("%d", s);
	return EXIT_SUCCESS;
}