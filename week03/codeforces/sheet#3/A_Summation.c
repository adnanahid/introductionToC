#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a);
        sum += a;
    }
    long long absolute_sum = llabs(sum);
    printf("%lld\n", absolute_sum);
    return 0;
}