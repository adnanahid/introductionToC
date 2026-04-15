#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0) {
        printf("NO\n");
        return 0;
    }
    int difference = abs(a - b);
    if (difference == 0 || difference == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}