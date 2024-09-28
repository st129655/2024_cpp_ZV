

#include<iostream>

int main(int argc, char* argv[]) {
    int x = 0;
    int y = 0;
    scanf_s("%d", &x);
    scanf_s("%d", &y);
    if (x == 1 && y == 1) {
        printf("0");
    }
    else if (y == 1 || x == 1) {
        printf("1");
    }
    else if (x == y) {
        printf("2");
    }
    else {
        printf("1");
    }
    return EXIT_SUCCESS;
}
