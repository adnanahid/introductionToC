#include <stdio.h>

void theSum(long long int sum, int n, long long int arr[]) {
    if (n == 0) {
        printf("%lld", sum);
        return;
    };
    theSum(sum += arr[n - 1], n - 1, arr);
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    theSum(0, n, arr);
    return 0;
}