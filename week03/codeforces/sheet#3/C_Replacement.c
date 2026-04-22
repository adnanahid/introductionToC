#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp > 0) {
            printf("%d ", 1);
        } else if (temp < 0) {
            printf("%d ", 2);
        } else {
            printf("%d ", 0);
        }
    }

    return 0;
}