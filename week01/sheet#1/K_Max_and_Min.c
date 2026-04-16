#include <stdio.h>

int main() {
    int A, B, C, max, min;
    scanf("%d %d %d", &A, &B, &C);
    max = (A > B) ? (A > C) ? A : C : (B > C) ? B
                                              : C;
    min = (A < B) ? (A < C) ? A : C : (B < C) ? B
                                              : C;
    printf("%d %d", min, max);
    return 0;
}