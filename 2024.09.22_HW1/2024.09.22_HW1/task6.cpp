#include<iostream>

int main(int argc, char argv[]) {
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int c = a + b - 1;
	int z = c - a;
	int v = c - b;
	printf("%d %d", z, v);
	return EXIT_SUCCESS;
}