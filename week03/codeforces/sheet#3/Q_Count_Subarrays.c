// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         int n;
//         scanf("%d", &n);
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &arr[i]);
//         }

//         int count = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < i + 1; j++) {
//                 if (arr[j] < arr[j + 1])
//                     count++;
//             }
//         }
//         if (count > 1) {
//             printf("%d\n", count + n);
//         } else {
//             printf("%d\n", count);
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1)
        return 0;

    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int isNonDecreasing = 1;

                for (int k = i; k < j; k++) {
                    if (arr[k] > arr[k + 1]) {
                        isNonDecreasing = 0;
                        break;
                    }
                }

                if (isNonDecreasing) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}