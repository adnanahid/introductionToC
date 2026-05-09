#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    long long int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &arr[i]);

    long long int prefix[n + 1];
    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        long long sum = prefix[r] - prefix[l - 1];
        printf("%lld\n", sum);
    }

    return 0;
}