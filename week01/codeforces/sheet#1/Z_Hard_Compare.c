#include <stdio.h>
#include <math.h>

int main() {

    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    double sqr1 = (double)B * log(A);
    double sqr2 = (double)D * log(C);
    if (sqr1 > sqr2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}