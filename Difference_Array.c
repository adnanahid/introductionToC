#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int b[n];
        for (int i = 0; i < n; i++)
            b[i] = a[i];

        qsort(b, n, 4, compare);

        for (int i = 0; i < n; i++)
            printf("%d ", abs(a[i] - b[i]));
        printf("\n");
    }

    return 0;
}