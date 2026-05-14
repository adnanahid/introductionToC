#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int primary = 0, secondary = 0;
    int x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &x);

            primary += (i == j) ? x : 0;
            secondary += (i + j == n - 1) ? x : 0;
        }
    }

    printf("%d", abs(primary - secondary));

    return 0;
}