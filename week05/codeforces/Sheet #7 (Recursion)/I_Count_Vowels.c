#include <stdio.h>

void countVowel(int i, char s[], int count) {
    if (s[i] == '\0') {
        printf("%d\n", count);
        return;
    }

    char ch = tolower(s[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        count++;
    countVowel(i + 1, s, count);
}

int main() {
    char s[201];
    fgets(s, 201, stdin);
    countVowel(0, s, 0);
    return 0;
}