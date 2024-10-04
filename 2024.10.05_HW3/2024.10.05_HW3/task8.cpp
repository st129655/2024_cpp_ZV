#include<iostream>

int main(int argc, char* argv[]) {
    long long a = 0;
    long long b = 0;
    long long c = 1;
    long long s = 0;
    long long s1 = 0;
    long long a1 = 0;
    long long d = 1;
    long long gcd = 0;
    int z = 1e9;
    std::cin >> a;
    std::cin >> a1;

    if (a == 1) {
        s = 1;
    }
    else {
        while (d < a) {
            s = b + c;
            b = c;
            c = s;
            d++;
        }

    }
    d = 1;
    b = 0;
    c = 1;
    if (a1 == 1) {
        s1 = 1;
    }
    else {
        while (d < a1) {
            s1 = b + c;
            b = c;
            c = s1;
            d++;
        }

    }
    s1 = s1 % z;
    s = s % z;
    long long v = 1;
    long long max = 0;
    if (s > s1)
    {
        int m = s;
        s = s1;
        s1 = m;
    }
    while (s * s1 != 0)
    {
        int m = s1 % s;
        s1 = s;
        s = m;
    }
     gcd = s + s1;
     gcd = gcd % z;

    std::cout << gcd;
    return EXIT_SUCCESS;
}