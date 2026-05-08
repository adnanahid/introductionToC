#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
    int palindrome = 1;
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i])
            palindrome = 0;
    }
    return palindrome;
}

int main() {
    char s[1001];
    scanf("%s", s);

    int palindrome = is_palindrome(s);
    palindrome ? printf("Palindrome") : printf("Not Palindrome");
    return 0;
}