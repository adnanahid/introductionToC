// #include <stdio.h>

// int isOdd(int n) {
//     return n % 2 == 1;
// }

// int isBinaryPalindrome(int n) {
//     int temp = n;
//     int reversed = 0;

//     while (temp > 0) {
//         reversed = (reversed << 1) | (temp & 1);
//         temp >>= 1;
//     }

//     return reversed == n;
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     if (isOdd(n) && isBinaryPalindrome(n))
//         printf("YES\n");
//     else
//         printf("NO\n");

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}