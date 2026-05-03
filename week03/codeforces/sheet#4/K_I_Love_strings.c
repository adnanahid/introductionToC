#include <stdio.h>
#include <string.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1)
        return 0;

    char s1[51], s2[51];
    while (t--) {
        if (scanf("%s %s", s1, s2) != 2)
            return 0;
        int len1 = (int)strlen(s1);
        int len2 = (int)strlen(s2);
        int maxLen = len1 > len2 ? len1 : len2;
        for (int i = 0; i < maxLen; i++) {
            if (i < len1)
                printf("%c", s1[i]);
            if (i < len2)
                printf("%c", s2[i]);
        }
        printf("\n");
    }
    return 0;
}