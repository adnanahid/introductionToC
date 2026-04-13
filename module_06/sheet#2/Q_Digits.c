#include <stdio.h>

int main() {
    int testCases;
    scanf("%d", &testCases);
    for (int i = 1; i <= testCases; i++) {
        int currentNumber;
        scanf("%d", &currentNumber);
        do {
            printf("%d ", currentNumber % 10);
            currentNumber /= 10;
        } while (currentNumber != 0);
        printf("\n");
    }
    return 0;
}