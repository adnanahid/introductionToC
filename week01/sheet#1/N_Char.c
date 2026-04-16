#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    int ASCII = x;
    if (ASCII > 96) {
        printf("%c", ASCII - 32);
    } else {
        printf("%c", ASCII + 32);
    }

    return 0;
}