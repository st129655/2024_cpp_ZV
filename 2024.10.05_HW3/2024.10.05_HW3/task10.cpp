#include<iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	int s1 = 0;
	int s2 = 0;
	int c = 0;
	int t = 0;
	scanf_s("%d", &n);

	while (c < n) {
		c++;
		scanf_s("%d", &t);
		if (t > 0) {
			s1 += 1;
		}
		else {
			if (s1 > s2) {
				s2 = s1;
			} s1 = 0;
		}
	}
	if (s1 >= s2) {
		s2 = s1;
	}
	printf("%d", s2);
	return EXIT_SUCCESS;
}