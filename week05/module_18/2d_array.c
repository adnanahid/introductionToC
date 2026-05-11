#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int isPrimary = 1, isSecondary = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i != j && matrix[i][j] != 0) isPrimary = 0;
            if (i + j != n - 1 && matrix[i][j] != 0) isSecondary = 0;
        }

    printf(isPrimary || isSecondary ? "Yes" : "No");
    return 0;
}