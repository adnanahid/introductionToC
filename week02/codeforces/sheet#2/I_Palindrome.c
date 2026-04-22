#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int original_i = i;
    int reversed_num = 0;
    while (original_i != 0) {
        int last_num = original_i % 10;
        original_i = original_i / 10;
        reversed_num = reversed_num * 10 + last_num;
    }
    if (reversed_num == i) {
        printf("%d\nYES\n", reversed_num);
    } else {
        printf("%d\nNO\n", reversed_num);
    }
    return 0;
}