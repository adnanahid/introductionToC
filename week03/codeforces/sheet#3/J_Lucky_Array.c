#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int smallest = 100000;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == smallest) {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("Unlucky");
    } else {
        printf("Lucky");
    }

    return 0;
}