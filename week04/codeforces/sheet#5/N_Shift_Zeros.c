#include <stdio.h>

int countZero(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count++;
    }
    return count;
}

void printTheArray(int arr[], int n, int count) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            continue;
        else
            printf("%d ", arr[i]);
    }
    for (int i = 0; i < count; i++) {
        printf("0 ");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = countZero(arr, n);

    printTheArray(arr, n, count);

    return 0;
}