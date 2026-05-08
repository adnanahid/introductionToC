#include <stdio.h>

void printNumbers(n) {
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printNumbers(n);
    }

    return 0;
}