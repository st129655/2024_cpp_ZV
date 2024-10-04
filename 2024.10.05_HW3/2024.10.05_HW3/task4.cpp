#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int s = 0;
	int v = 0;
	int c = 1;
	int m = 0;
	int z = 0;
	int max = 0;
	scanf_s("%d", &n);
	while (c <= n) {
		scanf_s("%d", &v);
		scanf_s("%d", &s);
		if (s == 1) {
			m += 1;
			c++;
			if (v > max) {
				max = v;
				z = c - 1;
			}
		}
		else
			c++;

	}
	if (m == 0) {
		printf("-1");
	}
	else {
		printf("%d", z);
	}
	return EXIT_SUCCESS;
}