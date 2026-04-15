#include <stdio.h>

int main() {
    unsigned int a, b;
    // Reading two unsigned 32-bit integers
    if (scanf("%u %u", &a, &b) != 2) return 0;

    // The bitwise XOR operator simulates addition without carry
    unsigned int result = a ^ b;

    printf("%u\n", result);

    return 0;
}