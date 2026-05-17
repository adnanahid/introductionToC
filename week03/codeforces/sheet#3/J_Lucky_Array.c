#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x;
    int smallest = 100000;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == smallest) count++;
        else if (smallest > x) {
            smallest = x;
            count = 1;
        }
    }

    if (count % 2 == 0) {
        printf("Unlucky");
    } else {
        printf("Lucky");
    }

    return 0;
}