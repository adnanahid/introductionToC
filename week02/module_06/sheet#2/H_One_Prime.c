#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x == 1) {
        printf("NO");
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}