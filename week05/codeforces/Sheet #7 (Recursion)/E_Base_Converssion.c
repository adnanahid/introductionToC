#include <stdio.h>

void toBinary(int n) {
    if (n == 0) return;
    toBinary(n / 2);
    putchar('0' + n % 2);
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n == 0) printf("0 ");
        else toBinary(n);
        putchar('\n');
    }

    return 0;
}