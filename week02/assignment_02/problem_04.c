#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int psum = 0;
    int nsum = 0;
    for (int i = 1; i <= n; i++) {
        int c;
        scanf("%d", &c);
        if (c > 0) {
            psum += c;
        } else if (c < 0) {
            nsum += c;
        }
    }
    printf("%d %d", psum, nsum);
    return 0;
}