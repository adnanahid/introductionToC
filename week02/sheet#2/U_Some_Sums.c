#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int main_sum = 0;
    for (int i = 1; i <= n; i++) {
        int dup_i = i;
        int sum = 0;
        while (dup_i > 0) {
            int lastDigit = dup_i % 10;
            sum += lastDigit;
            dup_i /= 10;
        }
        if (a <= sum && sum <= b) {
            main_sum += i;
        }
    }
    printf("%d\n", main_sum);
    return 0;
}