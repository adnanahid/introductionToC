#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    scanf("%s", s);
    int isPalindrome = 1;
    for (int i = 0; i < strlen(s) / 2; i++) {
        if (s[i] != s[strlen(s) - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}