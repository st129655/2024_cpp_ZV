#include<iostream>
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int z = 1;
	int c = 1;
	int nod = 1;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	nod = gcd(m, n);
	if (m < n) {
		z = n / nod;
	}
	if (m > n) {
		if (nod > 1) {
			z = (n) / nod;
		}
		else {
			z = n;
		}
	}
	printf("%d", z);
	return EXIT_SUCCESS;
}