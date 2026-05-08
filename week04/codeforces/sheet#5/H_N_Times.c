#include <stdio.h>

void printNtime(int n) {
    for (int i = 1; i <= n; i++) {
        int theNum;
        char theChar;
        scanf("%d %c", &theNum, &theChar);
        for (int j = 1; j <= theNum; j++) {
            printf("%c ", theChar);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printNtime(n);
    return 0;
}