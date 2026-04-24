#include <stdio.h>

int main() {
    int n;  
    scanf("%d", &n);
    int twos_count = 0;
    int threes_count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0 && num % 3 == 0) {
            twos_count++;
        } else if (num % 2 == 0) {
            twos_count++;
        } else if (num % 3 == 0) {
            threes_count++;
        }
    }
    printf("%d %d\n", twos_count, threes_count);
    return 0;
}