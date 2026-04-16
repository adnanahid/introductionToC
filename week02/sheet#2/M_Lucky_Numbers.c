#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        int dup_i = i;
        if (dup_i >= 4 && dup_i % 4 == 0) {
            dup_i /= 4;
        }
        else if (dup_i >= 7 && dup_i % 7 == 0) {
            dup_i /= 7;
        }

        if (dup_i == 0) {
            printf("%d ", i);
        } else {
            printf("%d ", -1);
        }
    }
    return 0;
}