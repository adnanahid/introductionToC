#include <math.h>
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int min = a > b ? b : a;
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}