#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char s[100005];
        scanf("%s", s);
        int isGood = 0;
        for (int i = 0; i < strlen(s) - 2; i++) {
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') {
                isGood = 1;
                break;
            }
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') {
                isGood = 1;
                break;
            }
        }
        if (isGood) {
            printf("Good\n");
        } else {
            printf("Bad\n");
        }
    }

    return 0;
}