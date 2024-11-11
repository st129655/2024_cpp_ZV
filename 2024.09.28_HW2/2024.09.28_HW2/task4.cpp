#include <iostream>

int main(int argc, char* argv[]) {
    int z = 0;
    int x = 0;
    int c = 0;
    int z1 = 0;
    int x1 = 0;
    int c1 = 0;
    int s = 0;
    scanf_s("%d", &z);
    scanf_s("%d", &x);
    scanf_s("%d", &c);
    scanf_s("%d", &z1);
    scanf_s("%d", &x1);
    scanf_s("%d", &c1);
    if (z > x) {
        s = x;
        x = z;
        z = s;
    }
    if (z > c) {
        s = c;
        c = z;
        z = s;
    }
    if (x > c) {
        s = c;
        c = x;
        x = s;
    }
    if (z1 > x1) {
        s = x1;
        x1 = z1;
        z1 = s;
    }
    if (z1 > c1) {
        s = c1;
        c1 = z1;
        z1 = s;
    }
    if (x1 > c1) {
        s = c1;
        c1 = x1;
        x1 = s;
    }
    if (z == z1 && x == x1 && c == c1) {
        printf("Boxes are equal");
    }
    else if (z <= z1 && x <= x1 && c <= c1) {
        printf("The first box is smaller than the second one");
    }
    else if (z >= z1 && x >= x1 && c >= c1) {
        printf("The first box is larger than the second one");
    }
    else printf("Boxes are incomparable");
    return 0;
}
