
#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    int count[26] = {0};
    char ch;
 
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ch); 
        count[ch - 'a']++;
    }
 
    for (int i = 0; i < 26; i++) {
        while (count[i] > 0) {
            putchar(i + 'a');
            count[i]--;
        }
    }
 
    printf("\n");
    return 0;
}