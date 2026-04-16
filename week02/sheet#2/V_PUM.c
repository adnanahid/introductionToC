#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int pick = n * 4;

    for (int j = 1; j <= pick; j++) {
        if (j % 4 == 0) {
            printf("PUM\n");
        } else {

            printf("%d ", j);
        }
    }

    return 0;
}   