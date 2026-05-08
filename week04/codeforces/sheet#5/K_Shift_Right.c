#include <stdio.h>

void swap(int n, int arr[], int x) {
    for (int i = 0; i < x; i++) {

        int temp = arr[n - 1];

        for (int i = n - 1; i >= 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    swap(n, arr, x);

    return 0;
}