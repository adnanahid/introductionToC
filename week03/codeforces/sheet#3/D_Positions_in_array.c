#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp <= 10) {
            printf("A[%d] = %d\n", i, temp);
        }
    }
    return 0;
}