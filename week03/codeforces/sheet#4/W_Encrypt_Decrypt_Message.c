#include <stdio.h>
#include <string.h>

int main() {
    char Key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char Original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int n;
    scanf("%d", &n);
    char s[100005];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (n == 1) {
            for (int j = 0; j < strlen(Original); j++) {
                if (s[i] == Original[j]) {
                    putchar(Key[j]);
                }
            }
        } else {
            for (int j = 0; j < strlen(Key); j++) {
                if (s[i] == Key[j]) {
                    putchar(Original[j]);
                }
            }
        }
    }
}