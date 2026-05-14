// #include <stdio.h>

// int main() {
//     int rows, cols;
//     scanf("%d %d", &rows, &cols);

//     int matrix[rows][cols];
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int target;
//     scanf("%d", &target);

//     int found = 0;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (matrix[i][j] == target) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (found) {
//             break;
//         }
//     }
//     if (found) {
//         printf("will not take number\n");
//     } else {
//         printf("will take number\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int target;
    scanf("%d", &target);

    int exist = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == target) {
                exist = 1;
                break;
            }
            if (exist) break;
        }

    exist ? printf("will not take number") : printf("will take number");
    return 0;
}