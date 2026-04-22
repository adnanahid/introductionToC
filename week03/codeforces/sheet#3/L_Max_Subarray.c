#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < n; j++) {
            int max = arr[j];
            for (int k = j; k < n; k++) {
                if (arr[k] > max) {
                    max = arr[k];
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }
    return 0;
}