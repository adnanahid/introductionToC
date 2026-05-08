#include <stdio.h>

int main() {
    char s[10001];
    char target[] = "hello";
    int target_ptr = 0;
    if (scanf("%s", s) != 1)
        return 0;

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == target[target_ptr])
            target_ptr++;

        if (target_ptr == 5)
            break;
    }

    if (target_ptr == 5)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}