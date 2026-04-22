#include <stdio.h>

int main() {
    long long int N;
    if (scanf("%lld", &N) != EOF) {
        long long sum = N * (N + 1) / 2;
        printf("%lld\n", sum);
    }
    return 0;
}