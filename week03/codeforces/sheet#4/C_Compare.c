#include <stdio.h>
#include <string.h>

int main() {
    char x[21], y[21];
    
    if (scanf("%s %s", x, y) != 2) {
        return 0;
    }

    if (strcmp(x, y) <= 0) {
        printf("%s\n", x);
    } else {
        printf("%s\n", y);
    }

    return 0;
}