#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    scanf("%s", s);

    int balance = 0;
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == 'L')
            balance--;
        else
            balance++;

        if (!balance)
            count++;
    }

    printf("%d\n", count);

    int start = 0;
    balance = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == 'L')
            balance--;
        else
            balance++;

        if (!balance) {
            for (int j = start; j <= i; j++)
                printf("%c", s[j]);
            printf("\n");
            start = i + 1;
        }
    }

    return 0;
}