#include <stdio.h>

int main() {
    char s[10001];
    scanf("%s", s);
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            printf("%c - %d\n", 'a' + i, freq[i]);
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     char c;
//     int freq[26] = {0};
//     while (scanf("%c", &c) != EOF) {
//         freq[c - 'a']++;
//     }
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0)
//             printf("%c - %d\n", 'a' + i, freq[i]);
//     }
//     return 0;
// }