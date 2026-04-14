#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if (c == 'z') {
        printf("a\n");
        return 0;
    }
    char nextC = c + 1;
    printf("%c\n", nextC);
    return 0;
}