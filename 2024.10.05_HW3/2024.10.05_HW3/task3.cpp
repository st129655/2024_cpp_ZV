#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int c = 1;
	int a = 0;
	int z = 0;
	while (c <= n) {
		scanf_s("%d", &a);
		if (a > 437) {
			c++;
			continue;
		}
		else {
			printf("Crash %d", c);
			z = z + 1;
			break;
		}
	}
	if (z == 0) {
		printf("No crash");
	}
	return EXIT_SUCCESS;
}