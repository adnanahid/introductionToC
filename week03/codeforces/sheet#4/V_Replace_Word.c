#include <stdio.h>

int main() {
    char s[1005];
    scanf("%s", s);

    for (int i = 0; s[i]; i++) {

        if (s[i] == 'E' &&
            s[i + 1] == 'G' &&
            s[i + 2] == 'Y' &&
            s[i + 3] == 'P' &&
            s[i + 4] == 'T') {

            putchar(' ');
            i += 4;
        } else {
            putchar(s[i]);
        }
    }

    return 0;
}