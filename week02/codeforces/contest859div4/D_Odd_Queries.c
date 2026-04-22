// first input is test case
// The first line of each test case consists of 2 integers n(length of array) and q(number of queries).
// The second line of each test case consists of n integers
// The next q lines of each test case consists of 3 integers  l,r,k

// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++) {
//         int n, q;
//         scanf("%d %d", &n, &q);
//         int arr[n];
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[j]);
//         }
//         int dup_arr[n];
//         for (int m = 1; m <= q; m++) {
//             for (int k = 0; k < n; k++) {
//                 dup_arr[k] = arr[k];
//             }
//             int l, r, k;
//             scanf("%d %d %d", &l, &r, &k);
//             for (int n = l - 1; n < r; n++) {
//                 dup_arr[n] = k;
//             }
//             int sum = 0;
//             for (int o = 0; o < n; o++) {
//                 sum += dup_arr[o];
//             }
//             if (sum % 2 == 0) {
//                 printf("NO\n");
//             } else {
//                 printf("YES\n");
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);

        int arr[n + 1];
        int prefix[n + 1];

        prefix[0] = 0;

        for (int i = 1; i <= n; i++) {
            scanf("%d", &arr[i]);
            prefix[i] = prefix[i - 1] + arr[i];
        }

        int total_sum = prefix[n];

        while (q--) {
            int l, r, k;
            scanf("%d %d %d", &l, &r, &k);

            int old_range = prefix[r] - prefix[l - 1];
            int len = r - l + 1;

            int new_sum = total_sum - old_range + (len * k);

            if (new_sum % 2)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}