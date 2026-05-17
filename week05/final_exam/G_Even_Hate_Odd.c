#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int x;
        int even = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x % 2 == 0) even++;
        }
        if (n % 2 != 0) {
            printf("-1\n");
        } else {
            printf("%d\n", abs(((n / 2) - even)));
        }
    }
    return 0;
}