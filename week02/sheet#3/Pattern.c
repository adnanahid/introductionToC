// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = n - i; j > 0; j--) {
//             printf(" ");
//         }
//         if (i % 2 == 0) {
//             for (int k = 1; k <= 2 * i - 1; k++) {
//                 printf("-");
//             }
//         } else {
//             for (int k = 1; k <= 2 * i - 1; k++) {
//                 printf("#");
//             }
//         }
//         printf("\n");
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = n - i; j > 0; j--) {
//             printf(" ");
//         }
//         if (i % 2 == 0) {
//             for (int k = 1; k <= 2 * i - 1; k++) {
//                 printf("-");
//             }
//         } else {
//             for (int k = 1; k <= 2 * i - 1; k++) {
//                 printf("#");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // Total rows in a diamond of size N is (2*n - 1)
    // We loop from -(n-1) to (n-1) to use the symmetry of the diamond
    for (int i = -(n - 1); i <= n - 1; i++) {
        
        // Calculate the current "row level" relative to the widest part
        // If n=3: i goes -2, -1, 0, 1, 2. row_val becomes 1, 2, 3, 2, 1
        int row_val = n - abs(i);
        
        // 1. Print Spaces
        // The number of spaces is n - row_val + 1 (based on your specific offset)
        for (int j = 0; j <= n - row_val; j++) {
            printf(" ");
        }

        // 2. Choose character based on row_val
        char c = (row_val % 2 == 0) ? '-' : '#';

        // 3. Print the characters (2 * row_val - 1)
        for (int k = 0; k < (2 * row_val - 1); k++) {
            putchar(c);
        }

        printf("\n");
    }

    return 0;
}