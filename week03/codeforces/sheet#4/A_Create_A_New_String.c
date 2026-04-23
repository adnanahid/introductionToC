#include <stdio.h>

int main() {
    char s[1001], t[1001];
    if (scanf("%s %s", s, t) != 2)
        return 0;
    int count_s = 0, count_t = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count_s++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        count_t++;
    }
    printf("%d %d\n%s %s\n", count_s, count_t, s, t);
    return 0;
}