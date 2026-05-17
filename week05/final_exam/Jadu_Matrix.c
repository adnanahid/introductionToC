#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m) {
        printf("NO\n");
        return 0;
    }

    int x;
    int isJadu = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &x);
            if ((i == j || i + j == n - 1) && x != 1) {
                isJadu = 0;
                break;
            }
            if (i != j && i + j != n - 1 && x != 0) {
                isJadu = 0;
                break;
            }
        }
        if (!isJadu) break;
    }

    isJadu ? printf("YES\n") : printf("NO\n");

    return 0;
}
