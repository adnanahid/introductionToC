#include <stdio.h>

void distinct(int n) {
    int freq[2001] = {0};
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        freq[x + 1000] = 1;
    }

    int count = 0;

    for (int i = 0; i < 2001; i++) {
        if (freq[i])
            count++;
    }
    printf("%d\n", count);
}

int main() {
    int n;
    scanf("%d", &n);
    distinct(n);
    return 0;
}