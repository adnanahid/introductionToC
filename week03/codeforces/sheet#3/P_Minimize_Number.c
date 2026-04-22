#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    while (1) {
        int allEven = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                allEven = 0;
                break;
            }
        }

        if (allEven) {
            for (int i = 0; i < n; i++) {
                arr[i] /= 2;
            }
            count++;
        } else {
            break;
        }
    }
    printf("%d\n", count);

    return 0;
}