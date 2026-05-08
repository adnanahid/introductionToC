#include <stdio.h>

int main() {
    int a = 10;
    int *pointerOf_a = &a;
    printf("value of a = %d\npointerOf_a = %p", a, pointerOf_a);
    return 0;
}