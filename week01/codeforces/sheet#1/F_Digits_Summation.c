#include <stdio.h>

int main() {
    long long int N, M;
    scanf("%lld %lld", &N, &M);
    int lastOfN = N % 10;
    int lastOfM = M % 10;
    printf("%d", lastOfN + lastOfM);
    return 0;
}