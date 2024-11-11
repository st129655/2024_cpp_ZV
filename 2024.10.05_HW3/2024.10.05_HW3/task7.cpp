#include<iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int z = 1;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	if (m > n)
	{
		int c = m;
		m = n;
		n = c;
	}
	while (m * n != 0)
	{
		int c = n % m;
		n = m;
		m = c;
	}
	int nod = n + m;
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