#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, 4, compare);

    long long sum = 0;
    int count = 0;
    for (int i = 0; i >= 0 && count < k; i++) {
        sum += a[i];
        count++;
    }

    printf("%lld\n", sum);

    return 0;
}