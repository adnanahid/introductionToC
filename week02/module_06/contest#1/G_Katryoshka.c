// #include <stdio.h>

// int main() {
//     long long n, m, k;
//     scanf("%lld %lld %lld", &n, &m, &k);
//     if (n == 0 || k == 0) {
//         printf("%lld\n", 0);
//         return 0;
//     }
//     long long katry1 = n;
//     if (m < katry1)
//         katry1 = m;
//     if (k < katry1)
//         katry1 = k;
//     n -= katry1;
//     k -= katry1;
//     if (n == 0 || k == 0) {
//         printf("%lld\n", katry1);
//         return 0;
//     }
//     long long int katry2 = (n / 2 < k) ? (n / 2) : k;

//     printf("%lld\n", katry1 + katry2);
//     return 0;
// }

#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    // Step 1: use (1 eye + 1 mouth + 1 body)
    long long x = n;
    if (m < x) x = m;
    if (k < x) x = k;

    n -= x;
    m -= x;
    k -= x;

    // Step 2: use (2 eyes + 1 body)
    long long y = n / 2;
    if (k < y) y = k;

    printf("%lld\n", x + y);

    return 0;
}


// #include <stdio.h>

// int main() {
//     long long n, m, k;
//     scanf("%lld %lld %lld", &n, &m, &k);

//     long long lo = 0, hi = k, ans = 0;
//     while (lo <= hi) {
//         long long mid = lo + (hi - lo) / 2;
//         long long eyes_used = 2 * mid - (mid < m ? mid : m);
//         if (eyes_used <= n) {
//             ans = mid;
//             lo = mid + 1;
//         } else {
//             hi = mid - 1;
//         }
//     }

//     printf("%lld\n", ans);
//     return 0;
// }