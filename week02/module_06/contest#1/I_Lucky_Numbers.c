#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int f = n % 10;
    int s = (n / 10) % 10;
    if(f % s == 0 || s % f == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}