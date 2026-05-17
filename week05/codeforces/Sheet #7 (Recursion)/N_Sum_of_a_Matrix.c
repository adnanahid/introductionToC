#include <stdio.h>

int Row, Col;

void sumMatrix(int idx, int A[][100], int B[][100]) {
    if (idx == Row * Col) return;

    int row = idx / Col;
    int col = idx % Col;

    printf("%d", A[row][col] + B[row][col]);

    if (Col - 1 == col) putchar('\n');
    else putchar(' ');

    sumMatrix(idx + 1, A, B);
}

int main() {

    scanf("%d %d", &Row, &Col);

    int A[100][100], B[100][100];

    for (int i = 0; i < Row; i++)
        for (int j = 0; j < Col; j++)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < Row; i++)
        for (int j = 0; j < Col; j++)
            scanf("%d", &B[i][j]);

    sumMatrix(0, A, B);

    return 0;
}