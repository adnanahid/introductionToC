#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    unsigned long long int factorial;
    for (int i = 1; i <= n; i++) {
        int c;
        scanf("%d", &c);
        factorial = 1;
        for (int j = 1; j <= c; j++) {
            factorial *= j;
        }
        printf("%llu\n", factorial);
    }
    return 0;
}