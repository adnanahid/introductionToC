#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int max = x > y ? x : y;
        int min = x > y ? y : x;
        int sum = 0;
        for (int j = min + 1; j < max; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}