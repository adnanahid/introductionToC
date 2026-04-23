#include <stdio.h>
#include <string.h>

int main() {
    char a[1000001];
    scanf("%s", a);
    long long sum = 0;
    for (long long i = 0; i < strlen(a); i++) {
        sum += a[i] - '0';
    }
    printf("%lld\n", sum);
    return 0;
}