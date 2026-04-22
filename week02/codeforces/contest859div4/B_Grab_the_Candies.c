#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int bags;
        scanf("%d", &bags);
        int odd = 0, even = 0;
        for (int j = 0; j < bags; j++) {
            int candies;
            scanf("%d", &candies);
            if (candies % 2 == 0)
                even += candies;
            else
                odd += candies;
        }
        if (even > odd)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}