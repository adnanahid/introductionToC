#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1)
        return 0;
    for (int i = 0; i < t; i++) {
        char n[102];
        scanf("%s", n);
        int count = 0;
        for (int j = 0; n[j] != '\0'; j++) {
            if (n[j] >= 'a' && n[j] <= 'z') {
                count++;
            }
        }
        if (count > 10)
            printf("%c%d%c\n", n[0], count - 2, n[count - 1]);
        else
            printf("%s\n", n);
    }
    return 0;
}