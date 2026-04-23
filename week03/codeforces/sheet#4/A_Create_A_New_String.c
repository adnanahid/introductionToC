#include <stdio.h>

int main() {
    char a[1005], b[1005];
    scanf("%s %s", a, b);
    printf("%d %d\n%s %s\n", strlen(a), strlen(b), a, b);
    return 0;
}