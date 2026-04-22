#include <stdio.h>

int main() {
    int A, B, C, max, mid, min;
    scanf("%d %d %d", &A, &B, &C);
    max = A > B ? A > C ? A : C : B > C ? B
                                        : C;
    min = A < B ? A < C ? A : C : B < C ? B
                                        : C;

    if (max == A && min == B) {
        mid = C;
    } else if (max == A && min == C) {
        mid = B;
    } else if (max == B && min == A) {
        mid = C;
    } else if (max == B && min == C) {
        mid = A;
    } else if (max == C && min == A) {
        mid = B;
    } else if (max == C && min == B) {
        mid = A;
    }
    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d\n\n", A, B, C);
    return 0;
}