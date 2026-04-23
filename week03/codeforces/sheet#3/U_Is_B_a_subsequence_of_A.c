// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     int arr_a[a], arr_b[b];
//     for (int i = 0; i < a; i++) {
//         scanf("%d", &arr_a[i]);
//     }
//     for (int i = 0; i < b; i++) {
//         scanf("%d", &arr_b[i]);
//     }

//     int is_subsequence = 1;
//     int is_big = 0;
//     for (int j = 0; j < b; j++) {
//         for (int k = 0; k < a; k++) {
//             if (arr_b[j] == arr_a[k]) {
//                 if (is_big > k) {
//                     is_subsequence = 0;
//                     break;  
//                 }
//                 is_big = k;
//             }
//         }
//     }
//     printf("%s", is_subsequence ? "YES" : "NO");
//     return 0;
// }

#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int arr_a[n], arr_b[m];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr_a[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr_b[i]);
    }

    int j = 0; 
    for (int i = 0; i < n && j < m; i++) {
        if (arr_a[i] == arr_b[j]) {
            j++; 
        }
    }

    if (j == m) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}