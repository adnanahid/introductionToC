#include <stdio.h>

int main() {
    double R;
    const double pi = 3.141592653;
    scanf("%lf", &R);
    double Area = pi * R * R;
    printf("%.9f\n", Area);
    return 0;
}