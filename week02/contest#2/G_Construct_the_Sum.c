// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while (t--) {
//         long long n, s;
//         scanf("%lld %lld", &n, &s);

//         long long maxSum = n * (n + 1) / 2;

//         if (s > maxSum) {
//             printf("-1\n");
//             continue;
//         }

//         for (long long i = n; i >= 1; i--) {
//             if (i <= s) {
//                 printf("%lld ", i);
//                 s -= i;
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, s;
        scanf("%lld %lld", &n, &s);

        long long maxSum = n * (n + 1) / 2;

        if (s > maxSum) {
            printf("-1\n");
            continue;
        }

        long long result[100005];
        int idx = 0;

        for (long long i = n; i >= 1 && s > 0; i--) {
            if (i <= s) {
                result[idx++] = i;
                s -= i;
            }
        }

        for (int i = 0; i < idx; i++) {
            printf("%lld ", result[i]);
        }
        printf("\n");
    }

    return 0;
}