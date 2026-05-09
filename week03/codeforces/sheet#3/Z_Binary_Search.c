#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

void binarySearch(int n, long long arr[], long long target) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            printf("found\n");
            return;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    printf("not found\n");
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    long long arr[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    qsort(arr, n, sizeof(long long), compare);

    while (q--) {
        long long target;
        scanf("%lld", &target);
        binarySearch(n, arr, target);
    }

    return 0;
}