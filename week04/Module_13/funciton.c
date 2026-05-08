#include <stdio.h>

int main() {
    // array length
    int n;
    scanf("%d", &n);

    // taking input of array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // taget number
    int x;
    scanf("%d", &x);

    // flag
    int flag = 0;

    // logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                flag = 1;
                break;
            }
        }
    }

    // output
    if (flag == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}