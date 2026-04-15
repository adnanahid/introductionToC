#include <stdio.h>

int main() {
    long long t, l, r;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%lld %lld", &l, &r);
        if (l > r) {
            long long temp = l;
            l = r;
            r = temp;
        }
        
        long long sum = (r - l + 1) * (l + r) / 2;
        printf("%lld\n", sum);
    }
    return 0;
}