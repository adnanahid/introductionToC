#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int found = 0;
    for (int i = a; i <= b; i++) {
        int dup_i = i;
        int isLucky = 1;
        while (dup_i > 0) {
            if (dup_i % 10 != 7 && dup_i % 10 != 4) {
                isLucky = 0;
                break;
            }
            dup_i /= 10;
        }
        if (isLucky) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
    return 0;
}