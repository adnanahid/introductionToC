#include <stdio.h>

int main() {
    long long id;
    scanf("%lld", &id);

    long long row = id / 4;
    long long col;

    // Check if the row index is even or odd
    if (row % 2 == 0) {
        // Even rows: 0, 1, 2, 3
        col = id % 4;
    } else {
        // Odd rows: 3, 2, 1, 0
        // We subtract the remainder from the max column index (3)
        col = 3 - (id % 4);
    }

    printf("%lld %lld\n", row, col);

    return 0;
}