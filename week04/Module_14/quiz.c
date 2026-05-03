// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= 3; j++) {
//             printf("%d", i);
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}