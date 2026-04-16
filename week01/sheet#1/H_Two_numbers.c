#include <stdio.h>
#include <math.h>

int main() {
    double A, B;
    if (scanf("%lf %lf", &A, &B) != 2) return 0;
    double result = A / B;
    printf("floor %.0f / %.0f = %.0f\n", A, B, floor(result));
    printf("ceil %.0f / %.0f = %.0f\n", A, B, ceil(result));
    printf("round %.0f / %.0f = %.0f\n", A, B, round(result));

    return 0;
}