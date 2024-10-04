#include<iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int nod = 1;
	int c = 1;
	int max = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	while (c <= max) {
		if (a % c == 0 && b % c == 0) {
			nod = c;
			c++;
		}
		else {
			c++;
		}
	}
	int nok = (a * b) / nod;
	printf("%d", nok);
	return EXIT_SUCCESS;
}