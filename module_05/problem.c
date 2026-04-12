// problem 01: Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

// #include <stdio.h>

// int main() {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if (A >= B) {
//         printf("Yes");
//     } else {
//         printf("No");
//     }
//     return 0;
// }

// problem 02: Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

// #include <stdio.h>

// int main() {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if (A % B == 0 || B % A == 0) {
//         printf("Multiples");
//     } else {
//         printf("No Multiples");
//     }

//     return 0;
// }

// problem 03: Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

// For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

// #include <stdio.h>

// int main() {
//     int X;
//     scanf("%d", &X);
//     while (X >= 10) {
//         X /= 10;
//     }
//     X % 2 == 0 ? printf("EVEN") : printf("ODD");
//     return 0;
// }