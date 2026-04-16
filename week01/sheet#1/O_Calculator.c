#include <stdio.h>

int main() {
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    if (S == '+') {
        printf("%d", A + B);
    }
    if (S == '-') {
        printf("%d", A - B);
    }
    if (S == '*') {
        printf("%d", A * B);
    }
    if (S == '/') {
        printf("%d", A / B);
    }
    return 0;
}