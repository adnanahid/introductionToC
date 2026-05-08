#include <stdio.h>

int fun(int x, int y) {
    printf("%d\n", x + y);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    fun(x, y);

    return 0;
}