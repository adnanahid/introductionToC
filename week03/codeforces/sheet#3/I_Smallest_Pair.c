#include <limits.h>
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int lowest = __INT_MAX__;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                printf("%d %d\n", i, j);
                // int sum = a[i] + a[j] + (j - i);
                // if (sum < lowest) {
                //     lowest = sum;
                // }
            }
        }
        printf("%d\n", lowest);
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     // 1. Define an array of 5 integers
//     int numbers[4] = {20, 1, 9, 4};
//     int size = 4;

//     printf("Calculating pair sums:\n");
//     printf("------------------------\n");

//     // 2. Outer loop: selects the first element
//     for (int i = 0; i < size; i++) {

//         // 3. Inner loop: selects the second element (always starts after i)
//         for (int j = i + 1; j < size; j++) {

//             // Calculate the sum
//             int sum = numbers[i] + numbers[j];

//             // 4. Print the result with the indices used
//             printf("Index %d + Index %d: %d + %d = %d\n", i, j, numbers[i], numbers[j], sum);
//         }
//     }

//     return 0;
// }