#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, n, sizeof(int), compare);

    long long int sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0 && count < k; i--) {
        if (a[i] > 0) {
            sum += a[i];
            count++;
        }
    }
    printf("%lld", sum);
    return 0;
}