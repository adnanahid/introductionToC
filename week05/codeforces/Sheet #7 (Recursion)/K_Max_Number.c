#include <limits.h>
#include <stdio.h>

int findMax(int n) {
    if (n == 0) return INT_MIN;

    int x;
    scanf("%d", &x);

    int maxFromRest = findMax(n - 1);

    if (x > maxFromRest) return x;
    else return maxFromRest;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", findMax(n));
    return 0;
}