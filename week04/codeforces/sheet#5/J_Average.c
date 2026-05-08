#include <stdio.h>

void theAvg(int n) {
    double theSum = 0;

    for (int i = 0; i < n; i++) {
        double theNum;
        scanf("%lf", &theNum);
        theSum += theNum;
    }
    printf("%.6f\n", theSum / n);
}

int main() {
    int n;
    scanf("%d", &n);
    theAvg(n);
    return 0;
}
