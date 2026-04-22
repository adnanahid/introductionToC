#include <stdio.h>

int main() {
    int L1, R1, L2, R2;
    scanf("%d %d %d %d", &L1, &R1, &L2, &R2);
    int start = L1 > L2 ? L1 : L2;
    int end = R1 > R2 ? R2 : R1;
    if (start <= end) {
        printf("%d %d", start, end);
    } else {
        printf("-1");
    }
    return 0;
}