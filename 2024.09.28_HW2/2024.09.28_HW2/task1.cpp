#include<iostream>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;
    int y = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);
    if ((a - c == 0) || (b - d == 0)) {
        printf("YES");
    }
    else {
        if (c > a) {
            x = c - a;
        }
        else {
            x = a - c;
        }
        if (b > d) {
            y = b - d;
        }
        else {
            y = d - b;
        }
        if (x == y) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }


    return EXIT_SUCCESS;
}
