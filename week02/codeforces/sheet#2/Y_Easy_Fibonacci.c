#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int fib[50] = {0, 1};
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    return 0;
}