#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int freq[10001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
        if (freq[arr[i] + 1] > 0) count++;

    printf("%d", count);
    return 0;
}