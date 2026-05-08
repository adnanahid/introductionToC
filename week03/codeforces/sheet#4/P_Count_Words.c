#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    static char s[1000005];

    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    printf("%d", wordCount);
    return 0;
}