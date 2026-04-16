#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    while (X >= 10) {
        X /= 10;
    }
    X % 2 == 0 ? printf("EVEN") : printf("ODD");
    return 0;
}