#include <stdio.h>

void isPrime(int n) {
    for (int i = 0; i < n; i++) {
        int theNum;
        scanf("%d", &theNum);

        if (theNum < 2) {
            printf("NO\n");
            continue;
        }

        if (theNum == 2) {
            printf("YES\n");
            continue;
        }

        if (theNum % 2 == 0) {
            printf("NO\n");
            continue;
        }

        int prime = 1;
        for (int j = 3; j * j <= theNum; j += 2) {
            if (theNum % j == 0) {
                prime = 0;
                break;
            }
        }
        prime ? printf("YES\n") : printf("NO\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    isPrime(n);
    return 0;
}