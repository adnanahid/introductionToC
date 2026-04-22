#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++) {
        arr[3];
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
        }
        if (arr[0] + arr[1] == arr[2])
            printf("+\n");
        else if (arr[0] - arr[1] == arr[2])
            printf("-\n");
    }
    return 0;
}