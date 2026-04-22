#include <ctype.h>
#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    char code[a + b + 2];
    scanf("%s", code);

    int isvalid = 1;

    
    if (code[a] != '-') {
        isvalid = 0;

    } else {
        for (int i = a + 1; i < a + b + 1; i++) {
            if (i == a)
                continue;
            if (!isdigit(code[i])) {
                isvalid = 0;
                break;
            }
        }
    }

    if (isvalid) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}