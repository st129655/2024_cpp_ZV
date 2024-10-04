#include <iostream>

int main(int argc, char* argv[])
{
    int h = 0;
    int a = 0;
    int b = 0;
    int day = 0;
    scanf_s("%d", &h);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    h = h + (((a - b) - h % (a - b)) % (a - b));
    h = (h - a) * ((h / a) - ((h - a) / a));
    day++;
    h = h + (((a - b) - h % (a - b)) % (a - b));
    day += h / (a - b);
    printf("%d", day);
    return EXIT_SUCCESS;
}
