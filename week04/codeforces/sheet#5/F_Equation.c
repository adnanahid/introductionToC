#include <stdio.h>

long long int theEq(int x, int n) {

    long long result = 0;
    long long power = 1;

    for (int i = 2; i <= n; i += 2) {
        power *= x * x;
        result += power;
    }

    return result;
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    long long int res = theEq(x, n);
    printf("%lld\n", res);

    return 0;
}
