// #include <ctype.h>
// #include <stdio.h>

// int main() {
//     static char s[1000005];

//     fgets(s, sizeof(s), stdin);

//     int inword = 0;
//     int start = -1;
//     int end = 0;

//     for (int i = 0; s[i] != '\0'; i++) {

//         if (isalpha(s[i]) && !inword) {
//             start = i;
//             inword = 1;
//         }

//         if (!isalpha(s[i]) && inword) {
//             end = i - 1;

//             for (int j = end; j >= start; j--) {
//                 printf("%c", s[j]);
//             }

//             if (s[i] != '\0') {
//                 printf(" ");
//             }

//             inword = 0;
//         }

//         if (s[i] == '\0') {
//             break;
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

static char s[1000005];

void reverseWord(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 0;

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverseWord(s, start, i - 1);
            start = i + 1;
        }
    }   

    printf("%s\n", s);

    return 0;
}