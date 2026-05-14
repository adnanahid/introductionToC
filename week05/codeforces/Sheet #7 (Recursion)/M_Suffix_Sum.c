#include <stdio.h>

long long suffixSum(int arr[], int n, int m) {
    if (m == 0) return 0;
    return arr[n - 1] + suffixSum(arr, n - 1, m - 1);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%lld", suffixSum(arr, n, m));
    return 0;
}