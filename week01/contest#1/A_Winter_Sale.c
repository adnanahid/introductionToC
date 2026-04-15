#include <stdio.h>

int main() {
    int x, p;
    scanf("%d %d", &x, &p);
    float originalPrice = ((float)p / (100 - (float)x)) * 100;
    printf("%.2f", originalPrice);
    return 0;
}