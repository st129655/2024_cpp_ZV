#include <iostream>
#include <cmath>

int main(int argc, char* argv[]){
    double a = 0;
    double b = 0;
    double c = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a == 0){
        if (b == c && b == 0){
            printf("-1\n");
        }
        else if (b == 0 && c != 0){
            printf("0\n");
        }
        else{
            printf("1\n%lf\n", -c / b);
        }
    }
    else{
        double d = b * b - 4 * a * c;
        if (d > 0){
            double x1 = (-sqrt(d) - b) / (2 * a);
            double x2 = (sqrt(d) - b) / (2 * a);
            printf("2\n%lf\n%lf\n", x1, x2);
        }
        else if (d == 0){
            printf("1\n%lf\n", -b / (2 * a));
        }
        else{
            printf("0\n");
        }
    }
    return EXIT_SUCCESS;
}