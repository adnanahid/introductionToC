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

// problem 04: Write a program that takes an integer from the user and calculates how many digits it has.

// #include <stdio.h>

// int main() {
//     int X, totalDigit = 0;
//     if (scanf("%d", &X) != 1)
//         return 0;
//     if (X < 0)
//         X = -X;
//     do {
//         X /= 10;
//         totalDigit++;

//     } while (X > 0);
//     printf("%d", totalDigit);
//     return 0;
// }

// problem 05: Calculate the sum of all digits in a given number.

// #include <stdio.h>

// int main() {
//     int X;
//     if (scanf("%d", &X) != 1)
//         return 1;
//     if (X < 0)
//         X = -X;
//     int sum = 0;
//     while (X != 0) {
//         sum += X % 10;
//         X /= 10;
//     }
//     printf("%d", sum);
//     return 0;
// }

// problem 06: Big swap Now, let's see if you can take it a step further. Instead of adding the digits together (like $1+2+3$), I want you to "glue" them back together in reverse order.

// #include <stdio.h>

// int main() {
//     int x, reversedNumber = 0;
//     scanf("%d", &x);
//     while (x != 0) {
//         reversedNumber = (reversedNumber * 10) + (x % 10);
//         x /= 10;
//     }
//     printf("%d", reversedNumber);
//     return 0;
// }

// problem 07: The Palindrome Challenge (The Final Boss) Now that you have the reversal logic, you can solve the Palindrome problem. A number is a palindrome if it reads the same forward and backward (like 121, 1331, or 7).

// #include <stdio.h>

// int main() {
//     int x, reversedNumber = 0, originalX;
//     if (scanf("%d", &x) != 1)
//         return 1;
//     originalX = x;

//     if (x < 0)
//         x = -x;
//     while (x != 0) {
//         reversedNumber = (reversedNumber * 10) + (x % 10);
//         x /= 10;
//     }
//     if (reversedNumber == originalX) {
//         printf("Palindrome");
//     } else {
//         printf("Not Palindrome");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char x;
//     scanf("%c", &x);
//     int ASCII = x;
//     if (ASCII > 96) {
//         printf("%c", ASCII - 32);
//     } else {
//         printf("%c", ASCII + 32);
//     }

//     return 0;
// }

