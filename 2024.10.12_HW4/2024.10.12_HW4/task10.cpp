#include<iostream>
#define N 1000
int main(int argc, char* argv[]) {
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int z = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	int goyda[N];
	a = a - 1;
	b = b - 1;
	c = c - 1;
	d = d - 1;
	for (int i = 0; i < n; ++i) {
		goyda[i] = i + 1;
	}
	for (; a < b;) {
		z = goyda[a];
		goyda[a] = goyda[b];
		goyda[b] = z;
		if (b - a == 1 || b - a == 2) {
			break;
		}
		else {
			a += 1;
			b -= 1;
		}
	}
	for (; c < d;) {
		z = goyda[c];
		goyda[c] = goyda[d];
		goyda[d] = z;
		if (d - c == 1 || d - c == 2) {
			break;
		}
		else {
			c += 1;
			d -= 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		printf("%d ", goyda[i]);
	}

	return EXIT_SUCCESS;
}