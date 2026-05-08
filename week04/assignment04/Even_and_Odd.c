#include <stdio.h>

void odd_even() {
    int n;
    scanf("%d", &n);
    int odd = 0, even = 0;
    int i;
    while (scanf("%d", &i) != EOF) {
        if (i % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d", even, odd);
}

int main() {
    odd_even();
    return 0;
}