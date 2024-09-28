
#include<iostream>

int main(int argc, char* argv[]) {
    int a = 0;
    scanf_s("%d", &a);
    int b = (a % 10) + ((a / 10) % 10) + a / 100;
    printf("%d", b);
    return EXIT_SUCCESS;
}
