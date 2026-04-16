#include <stdio.h>

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) == 2) {
        if (n <= 0 || m <= 0) {
            break;
        }
        int max = n > m ? n : m;
        int min = n > m ? m : n;
        int arr[max - min + 1];
        int sum = 0;
        for (int i = min; i <= max; i++) {
            arr[i - min] = i;
        }
        for (int i = 0; i < max - min + 1; i++) {
            sum += arr[i];
            printf("%d ", arr[i]);
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}