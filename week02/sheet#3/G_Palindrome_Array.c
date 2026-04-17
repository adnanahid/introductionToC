#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int middle = n / 2;
    int isPalindrome = 1; 
    for (int j = 0; j < middle; j++) {
        if (arr[j] != arr[n - 1 - j]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}