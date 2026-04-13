// problem 01 : Given a comparison symbol S between two numbers A and B.Determine whether it is Right or Wrong.The comparison is as follows : A<B, A> B, A = B.Where A, B are two integer numbers and S refers to the sign between them.

// #include <stdio.h>

// int main() {
//     int A, B;
//     char S;
//     scanf("%d %c %d", &A, &S, &B);
//     if ((S == '>' && A > B) || (S == '<' && A < B) || (S == '=' && A == B)) {
//         printf("Right");
//     } else {
//         printf("Wrong");
//     }
//     return 0;
// }

// problem 02: Given a mathematical expression. The expression will be one of the following expressions: A + B = C, A - B = C and A * B = C where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.
// #include <stdio.h>

// int main() {
//     int A, B, C, actual;
//     char S, E;
//     if (scanf("%d %c %d %c %d", &A, &S, &B, &E, &C) != 5)
//         return 0;
//     switch (S) {
//     case '+':
//         actual = A + B;
//         break;
//     case '-':
//         actual = A - B;
//         break;
//     case '*':
//         actual = A * B;
//         break;
//     }
//     if (actual == C) {
//         printf("Yes\n");
//     } else {
//         printf("%d\n", actual);
//     }
//     return 0;
// }

// problem 03: Given two segments [L1, R1] and [L2, R2]. Find the intersection of these two segments. If the intersection is empty, print -1. Otherwise, print the endpoints of the intersection segment.

// #include <stdio.h>

// int main() {
//     int L1, R1, L2, R2;
//     scanf("%d %d %d %d", &L1, &R1, &L2, &R2);
//     if (L1 <= L2 && L2 <= R1) {
//         printf("%d ", L2);
//     }
//     if (L2 <= R1 && R1 <= R2) {
//         printf("%d", R1);
//     }
//     if (!((L1 <= L2 && L2 <= R1) || (L2 <= R1 && R1 <= R2)) && !((L1 <= L2 && L2 <= R1) && (L2 <= R1 && R1 <= R2))) {
//         printf("%d", -1);
//     }
//     return 0;
// }

// other solution for problem 03:
// #include <stdio.h>

// int main() {
//     int L1, R1, L2, R2;
//     scanf("%d %d %d %d", &L1, &R1, &L2, &R2);
//     int start = L1 > L2 ? L1 : L2;
//     int end = R1 > R2 ? R2 : R1;
//     if (start <= end) {
//         printf("%d %d", start, end);
//     } else {
//         printf("-1");
//     }
//     return 0;
// }

// problem 04 : Given 4 numbers A, B, C and D.Print the last 2 digits from their Multiplication.
// #include <stdio.h>

// int main() {
//     long long int A = 1000000000, B= 1000000, C = 1000000, D = 1000000;
//     // scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
//     long long product = A * B * C * D;
//     int lastTwoDigit = product % 100;
//     printf("%d\n", lastTwoDigit);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     long long A, B, C, D;
//     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
//     A %= 100;
//     B %= 100;
//     C %= 100;
//     D %= 100;
//     long long result = (A * B) % 100;
//     result = (result * C) % 100;
//     result = (result * D) % 100;

//     printf("%02lld\n", result);

//     return 0;
// }

// #include <math.h>
// #include <stdio.h>

// int main() {

//     long long A, B, C, D;
//     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

//     double sqr1 = (double)B * log(A);
//     double sqr2 = (double)D * log(C);
//     if (sqr1 > sqr2) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    int int_part = (int)n;
    double decimal_part = n - int_part;
    if (decimal_part == 0) {
        printf("int %d\n", int_part);
    } else {
        printf("float %d %g\n", int_part, decimal_part);
    }
    return 0;
}