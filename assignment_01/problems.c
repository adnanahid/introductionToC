// Problem 01:
// #include <stdio.h>
// int main() {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
//     return 0;
// }

// // Problem 02:
// #include <stdio.h>
// int main() {
//     long long int A, B;
//     scanf("%lld %lld", &A, &B);
//     printf("%lld", A * B);
//     return 0;
// }

// Problem 03:
// #include <stdio.h>
// int main() {
//     long long int N;
//     scanf("%lld", &N);
//     if (N % 3 == 0) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
//     return 0;
// }

// Problem 04:
// #include <stdio.h>
// int main() {
//         int N;
//         scanf("%d", &N);
//         for (int i = 1; i <= N; i++) {
//             if (i % 3 == 0 && i % 7 == 0) {
//                 printf("%d\n", i);
//             }
//         }
//     return 0;
// }

// problem 05;
#include <stdio.h>
int main() {
    long long int N;
    scanf("%lld", &N);
    if (N > 1000) {
        printf("I will buy Punjabi\n");
        N -= 1000;
        if (N >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } else {
        printf("Bad luck!\n");
    }
    return 0;
}