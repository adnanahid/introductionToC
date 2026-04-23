// Given two numbers K and S .Determine how many different values of X, Y and Z such that(0≤X, Y, Z≤K)and X + Y + Z = S
#include <stdio.h>

int main() {
    int k, s;
    if (scanf("%d %d", &k, &s) != 2)
        return 0;
    int count = 0;
    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y;
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}