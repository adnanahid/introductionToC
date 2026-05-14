#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t) {
        int w, h;
        scanf("%d %d", &w, &h);
        w == h ? printf("Square\n") : printf("Rectangle\n");
        t--;
    }
    return 0;
}