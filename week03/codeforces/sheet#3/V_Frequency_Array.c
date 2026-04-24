#include <stdio.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long arr[n];
    long long freq[1000001] = {0};
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        freq[arr[i]]++;
    }

    for (long long i = 1; i <= m; i++) {
        printf("%lld\n", freq[i]);
    }
    return 0;
}