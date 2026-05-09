#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char arr[n][m];
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y), x--, y--;

    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {

            if (i == x && j == y)
                continue;

            if (i >= 0 && i < n && j >= 0 && j < m && arr[i][j] != 'x') {
                printf("no");
                return 0;
            }
        }
    }

    printf("yes");

    return 0;
}