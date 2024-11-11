#include <iostream> 

int main(int argc, char* argv[]) {
    int z = 0;
    int v = 0;
    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    int a3 = 0;
    int b3 = 0;
    scanf_s("%d", &z);
    scanf_s("%d", &v);
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &a2);
    scanf_s("%d", &b2);
    scanf_s("%d", &a3);
    scanf_s("%d", &b3);
    bool b = false;

    if (b1 >= z && a1 <= v) {
        b = true;
    }
    if (b2 >= z && a2 <= v) {
        b = true;
    }
    if (b3 >= z && a3 <= v) {
        b = true;
    }
    if (b1 + b2 >= z && a1 + a2 <= v) {
        b = true;
    }
    if (b1 + b3 >= z && a1 + a3 <= v) {
        b = true;
    }
    if (b2 + b3 >= z && a2 + a3 <= v) {
        b = true;
    }
    if (b1 + b2 + b3 >= z && a1 + a2 + a3 <= v) {
        b = true;
    }
    if (b) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return EXIT_SUCCESS;
}