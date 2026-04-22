#include <stdio.h>

int main() {
    int A, B, C;
    char S, E;

    scanf("%d %c %d %c %d", &A, &S, &B, &E, &C);

    if (S == '+') {
        if (A + B == C) {
            printf("Yes\n");
        } else {
            printf("%d\n", A + B);
        }
    }

    if (S == '-') {
        if (A - B == C) {
            printf("Yes\n");
        } else {
            printf("%d\n", A - B);
        }
    }

    if (S == '*') {
        if (A * B == C) {
            printf("Yes\n");
        } else {
            printf("%d\n", A * B);
        }
    }
    return 0;
}