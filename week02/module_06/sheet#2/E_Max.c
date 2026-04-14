#include <limits.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int max = INT_MIN;
    for (int i = 1; i <= n; i++) {
        int current;
        scanf("%d", &current);
        if (current > max) {
            max = current;
        }
    }
    printf("%d\n", max);
    return 0;
}