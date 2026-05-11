#include <stdio.h>

void pyramid(int row, int n) {
    if (row > n) return;
    for (int i = 0; i < n - row; i++) {
        putchar(' ');
    }
    for (int i = 0; i < 2 * row - 1; i++) {
        putchar('*');
    }
    putchar('\n');
    pyramid(row + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    pyramid(1, n);
    return 0;
}