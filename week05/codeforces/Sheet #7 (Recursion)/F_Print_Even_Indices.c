#include <stdio.h>

void printReversed(int start, int n, long long int arr[]) {
    if (start >= n) return;
    printReversed(start + 2, n, arr);
    printf("%lld ", arr[start]);
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    printReversed(0, n, arr);

    return 0;
}