#include <stdio.h>

int main() {
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long int first = A * B;
    long long int second = C * D;
    printf("Difference = %lld", first - second);
    return 0;
}