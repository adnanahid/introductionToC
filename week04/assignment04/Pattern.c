// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             if (i % 2 == 1)
//                 printf("%c", '#');
//             else
//                 printf("%c", '-');
//         }
//         printf("\n");
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             if (i % 2 == 1)
//                 printf("%c", '#');
//             else
//                 printf("%c", '-');
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

void printRow(int space, int width, char c) {
    printf("%*s", space, "");
    for (int i = 1; i <= width; i++)
        printf("%c", c);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printRow(n - i, 2 * i - 1, i % 2 == 0 ? '-' : '#');
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        printRow(n - i, 2 * i - 1, i % 2 == 0 ? '-' : '#');
        printf("\n");
    }
    return 0;
}