#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a = 0, b = 1, c;
    if (n == 1) {
        printf("%lld\n", a);
    } else if (n == 2) {
        printf("%lld\n", b);
    } else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld\n", c);
    }
    return 0;
}