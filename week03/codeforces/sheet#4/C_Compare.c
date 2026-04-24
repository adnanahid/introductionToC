#include <stdio.h>

int main() {
    char x[100], y[100];
    scanf("%s %s", x, y);

    int i = 0;
    while (x[i] != '\0' && y[i] != '\0' && x[i] == y[i]) {
        i++;
    }
    if (x[i] <= y[i])
        printf("%s\n", x);
    else {
        printf("%s\n", y);
    }
    return 0;
}