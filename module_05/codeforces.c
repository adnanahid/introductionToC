// problem A: Given a name S. Print "Hello, (name)" without parentheses.

// Input
// Only one line containing a string S.

// Output
// Print "Hello, " without quotes, then print name.

// #include <stdio.h>

// int main() {
//     char S[100];
//     scanf("%s", S);
//     printf("Hello, %s", S);
//     return 0;
// }

// problem E: Given a number R calculate the area of a circle using the following formula Area = π * R2. Note: consider π = 3.141592653.

// #include <stdio.h>

// int main() {
//     double R;
//     const double pi = 3.141592653;
//     scanf("%lf", &R);
//     double Area = pi * R * R;
//     printf("%.9f\n", Area);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     long long int N;
//     if (scanf("%lld", &N) != EOF) {
//         long long sum = N * (N + 1) / 2;
//         printf("%lld\n", sum);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double A, B;

//     // Using %lf for scanning into double variables
//     if (scanf("%lf %lf", &A, &B) != 2) return 0;

//     double result = A / B;

//     // Use %.0f to print the result as an integer-like float without decimals
//     // Use %.0f for A and B as well to match the example output format
//     printf("floor %.0f / %.0f = %.0f\n", A, B, floor(result));
//     printf("ceil %.0f / %.0f = %.0f\n", A, B, ceil(result));
//     printf("round %.0f / %.0f = %.0f\n", A, B, round(result));

//     return 0;
// }

// problem Q: Coordinates of a Point Given two numbers X, Y which donate coordinates of a point in 2D plan.Determine in which quarter does it belong.
// Note : Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.Print "Origem" If the point is at the origin.Print "Eixo X" If the point is over X axis.Print "Eixo Y" if the point is over Y axis.

// #include <stdio.h>

// int main() {
//     float X, Y;
//     scanf("%f %f", &X, &Y);
//     if (X > 0 && Y > 0) {
//         printf("Q1\n");
//     }
//     if (X < 0 && Y > 0) {
//         printf("Q2\n");
//     }
//     if (X < 0 && Y < 0) {
//         printf("Q3\n");
//     }
//     if (X > 0 && Y < 0) {
//         printf("Q4\n");
//     }
//     if (X == 0 && Y == 0) {
//         printf("Origem\n");
//     }
//     if (X == 0 && Y != 0) {
//         printf("Eixo Y\n");
//     }
//     if (Y == 0 && X != 0) {
//         printf("Eixo X\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int days, years, months;
    scanf("%d", &days);
    years = days / 365;
    months = (days - (years * 365)) / 30;
    days = (days - (years * 365) - (months * 30));
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
    return 0;
}