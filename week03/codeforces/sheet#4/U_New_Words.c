#include <ctype.h>
#include <stdio.h>

int main() {
    char s[1000005];
    scanf("%s", s);

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);

        if (ch == 'e') e++;
        if (ch == 'g') g++;
        if (ch == 'y') y++;
        if (ch == 'p') p++;
        if (ch == 't') t++;
    }

    int min = e;

    if (g < min) min = g;
    if (y < min) min = y;
    if (p < min) min = p;
    if (t < min) min = t;

    printf("%d", min);
    return 0;
}