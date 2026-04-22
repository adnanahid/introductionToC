#include <stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);
    long long arr[t];

    for (long long i = 0; i < t; i++) {
        scanf("%lld", &arr[i]);
    }
    long long max = 0;

    for (long long j = 0; j < t; j++) {
        long long c = arr[j];
        long long count = 0;
        while (c % 2 == 0) {
            count++;
            c = c / 2;
        }
        if (count > max) {
            max = count;
        }
    }
    printf("%lld", max);

    return 0;
}