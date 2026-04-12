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

// problem 08: Case Converter Write a program that takes a single character as input and converts it to the opposite case. If the character is uppercase, convert it to lowercase, and if it's lowercase, convert it to uppercase.
// #include <stdio.h>

// int main() {
//     char x;
//     scanf("%c", &x);
//     if (x >= 'a' && x <= 'z') {
//         printf("%c", x - 32);
//     } else {
//         printf("%c", x + 32);
//     }

//     return 0;
// }

// problem 09: Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// #include <stdio.h>

// int main() {
//     char X;
//     scanf("%c", &X);
//     int ASCII = X;
//     if (X >= 48 && X <= 57) {
//         printf("IS DIGIT");
//     } else if (X >= 65 && X <= 90) {
//         printf("ALPHA\nIS CAPITAL");
//     } else if (X >= 97 && X <= 122) {
//           printf("ALPHA\nIS SMALL");
//     }
//     return 0;
// }

// problem 10: Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// #include <stdio.h>

// int main() {
//     int A, B, C, max, min;
//     scanf("%d %d %d", &A, &B, &C);
//     max = (A > B) ? (A > C) ? A : C : (B > C) ? B
//                                               : C;
//     min = (A < B) ? (A < C) ? A : C : (B < C) ? B
//                                               : C;
//     printf("%d %d", min, max);
//     return 0;
// }

// problem 11: L. The Brothers
// Given two person names.
// Each person has {"the first name" + "the second name"}
// Determine whether they are brothers or not. Note: The two persons are brothers if they share the same second name.

// #include <stdio.h>

// int main() {
//     char firstName1[100], secondName1[100], firstName2[100], secondName2[100];
//     scanf("%s %s", firstName1, secondName1);
//     scanf("%s %s", firstName2, secondName2);
//     if (strcmp(secondName1, secondName2) == 0) {
//         printf("ARE Brothers");
//     } else {
//         printf("NOT");
//     }
//     return 0;
// }

// problem 12: Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

// #include <stdio.h>

// int main() {
//     long long int X, Y;
//     scanf("%lld %lld", &X, &Y);
//     printf("%lld + %lld = %lld\n", X, Y, X + Y);
//     printf("%lld * %lld = %lld\n", X, Y, X * Y);
//     printf("%lld - %lld = %lld\n", X, Y, X - Y);
//     return 0;
// }

// problem 13 : Given four numbers A, B, C and D.Print the result of the following equation :
//     X = (A * B) - (C * D).

// #include <stdio.h>

// int main() {
//     long long int A, B, C, D;
//     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
//     long long int first = A * B;
//     long long int second = C * D;
//     printf("Difference = %lld", first - second);
//     return 0;
// }

// problem 14 => O. Calculator. Given a mathematical expression. The expression will be one of the following expressions: A+B
// , A−B
// , A∗B
//  and A/B
// .

// Print the result of the mathematical expression.

// Input
// Only one line contains A,S
//  and B
//  (1≤A,B≤104)
// , S
//  is either (+,−,∗,/)
// .
// #include <stdio.h>

// int main() {
//     int A, B;
//     char S;
//     scanf("%d %c %d", &A, &S, &B);
//     if (S == '+') {
//         printf("%d", A + B);
//     }
//     if (S == '-') {
//         printf("%d", A - B);
//     }
//     if (S == '*') {
//         printf("%d", A * B);
//     }
//     if (S == '/') {
//         printf("%d", A / B);
//     }
//     return 0;
// }