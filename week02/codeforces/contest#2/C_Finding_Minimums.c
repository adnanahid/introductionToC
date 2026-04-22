// #include <limits.h>
// #include <stdio.h>
// int main() {
//     int n, k;
//     scanf("%d %d", &n, &k);

//     int fullGroup = n / k;
//     int reminderGroup = (n % k) == 0 ? 0 : 1;
//     int totalGroup = fullGroup + reminderGroup;

//     int arr[n];
//     for (int a = 0; a < n; a++) {
//         scanf("%d", &arr[a]);
//     }

//     for (int i = 1; i <= totalGroup; i++) {
//         for (int j = 0; j < k; j++) {
//         }
//     }

//     return 0;
// }

// sob input nibo then total group ber korbo tarpor total group songkhon loop chalabo. prottek ta loop theke value comapre kore min value print korbo.

#include <limits.h>
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int a = 0; a < n; a++) {
        scanf("%d", &arr[a]);
    }
    int fullGroup = n / k;
    for (int i = 0; i < fullGroup; i++) {
        int subGroup[k];
        for (int j = 0; j < k; j++) {
            subGroup[j] = arr[i * k + j];
        }
        int min = INT_MAX;
        for (int m = 0; m < k; m++) {
            if (subGroup[m] < min) {
                min = subGroup[m];
            }
        }
        printf("%d ", min);
    }
    if (n % k != 0) {
        int subGroup[n % k];
        for (int j = 0; j < n % k; j++) {
            subGroup[j] = arr[fullGroup * k + j];
        }
        int min = INT_MAX;
        for (int m = 0; m < n % k; m++) {
            if (subGroup[m] < min) {
                min = subGroup[m];
            }
        }
        printf("%d ", min);
    }
    return 0;
}

// #include <limits.h>
// #include <stdio.h>

// int main() {
//     int n, k;
//     scanf("%d %d", &n, &k);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i += k) {
//         int min = INT_MAX;

//         // process each group
//         for (int j = i; j < i + k && j < n; j++) {
//             if (arr[j] < min) {
//                 min = arr[j];
//             }
//         }

//         printf("%d ", min);
//     }

//     return 0;
// }