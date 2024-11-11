#include<iostream>
#include<cmath>

int main(int argc, char* argv[]) {
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	int x2 = 0;
	int y2 = 0;
	int r2 = 0;
	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &r1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &r2);
	int s1 = (r1 + r2) * (r1 + r2);
	int s2 = (r1 - r2) * (r1 - r2);
	int s = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	if (s2 <= s && s <= s1) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	return EXIT_SUCCESS;
}
