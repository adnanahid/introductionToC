#include <stdio.h>

int main() {
    float X;
    scanf("%f", &X);
    if (X >= 0 && X <= 25)
        printf("Interval [0,25]");
    else if (X > 25 && X <= 50)
        printf("Interval (25,50]");
    else if (X > 50 && X <= 75)
        printf("Interval (50,75]");
    else if (X > 75 && X <= 100)
        printf("Interval (75,100]");
    else
        printf("Out of Intervals");

    return 0;
}