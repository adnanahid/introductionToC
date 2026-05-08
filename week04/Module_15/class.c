#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int binary = 0, reminder = 0, base = 1;
    while (n) {
        reminder = n % 2;
        n /= 2;
        binary = binary + reminder * base;
        base *= 10;
    }
    printf("%d", binary);
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int reversed = 0, reminder = 0;
//     while (n) {
//         reminder = n % 10;
//         n /= 10;
//         reversed = reversed * 10 + reminder;
//     }
//     printf("%d", reversed);
//     return 0;
// }