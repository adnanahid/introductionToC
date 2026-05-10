#include <stdio.h>

void printDigits(int n) {
    if (n == 0) return;
    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n == 0) printf("0 ");
        else printDigits(n);
        printf("\n");
    }
    return 0;
}