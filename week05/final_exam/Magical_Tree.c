#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int row = (n + 11) / 2;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < (row * 2 - 1 - n) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}   