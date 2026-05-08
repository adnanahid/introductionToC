#include <stdio.h>

void concatTheArray(int n) {
    int c[2 * n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[n + i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    concatTheArray(n);
    return 0;
}