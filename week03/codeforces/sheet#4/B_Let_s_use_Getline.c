#include <stdio.h>

int main() {
    char str[1000001];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    for (int i = 0; str[i] != '\\'; i++) {
            printf("%c", str[i]);
    }

    return 0;
}