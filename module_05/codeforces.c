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