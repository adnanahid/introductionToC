#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int d2 = (m1 * d) / (m1 + m2);
        int fewer_takes = d - d2;
        printf("%d\n", fewer_takes);
    }

    return 0;
}