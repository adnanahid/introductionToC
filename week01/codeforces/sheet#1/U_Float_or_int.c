#include <stdio.h>
 
int main() {
    double n;
    scanf("%lf", &n);
    int int_part = (int)n;
    double decimal_part = n - int_part;
    if (decimal_part == 0) {
        printf("int %d\n", int_part);
    } else {
        printf("float %d %g\n", int_part, decimal_part);
    }
    return 0;
}