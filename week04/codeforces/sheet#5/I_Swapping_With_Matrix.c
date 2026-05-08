#include <stdio.h>

void swapRow(int n, int arr[n][n], int x, int y) {
    for (int i = 0; i < n; i++) {
        int temp = arr[x - 1][i];
        arr[x - 1][i] = arr[y - 1][i];
        arr[y - 1][i] = temp;
    }
}

void swapCol(int n, int arr[n][n], int x, int y) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i][x - 1];
        arr[i][x - 1] = arr[i][y - 1];
        arr[i][y - 1] = temp;
    }
}

int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    int arr[n][n];  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    swapRow(n, arr, x, y);
    swapCol(n, arr, x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}