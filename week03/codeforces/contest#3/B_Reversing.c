#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (int j = 0; j < i / 2; j++) {
                int temp = arr[j];
                arr[j] = arr[i - j - 1];
                arr[i - j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}