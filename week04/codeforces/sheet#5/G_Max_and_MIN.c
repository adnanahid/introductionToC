#include <limits.h>
#include <stdio.h>

void min(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d ", min);
}
void max(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    min(arr, n);
    max(arr, n);

    return 0;
}