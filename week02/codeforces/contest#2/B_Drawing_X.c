#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int middle = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Check for the center first!
            if (i == middle && j == middle) {
                printf("X");
            } 
            else if (i == j) {
                printf("\\");
            } 
            else if (i + j == n + 1) {
                printf("/");
            } 
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}