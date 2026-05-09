#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    if (x > y)
        return 1;
    else if (x < y)
        return -1;

    return 0;
}

int binarySearch(long long arr[], int n, long long target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 0;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), compare);

    while (q--) {
        long long x;
        scanf("%lld", &x);

        if (binarySearch(arr, n, x))
            printf("found\n");
        else
            printf("not found\n");
    }

    return 0;
}