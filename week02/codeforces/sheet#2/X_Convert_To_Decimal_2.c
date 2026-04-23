#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1)
        return 0;

    while (t--) {
        int n;
        if (scanf("%d", &n) != 1)
            break;

        int ones = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                ones++;
            }
            n /= 2;
        }

        long long result = (1LL << ones) - 1;
        printf("%lld\n", result);
    }
    return 0;
}