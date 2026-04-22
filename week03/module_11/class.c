// string copy

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[101], b[101];
//     scanf("%s %s", a, b);

// int length_b = strlen(b);
// for (int i = 0; i <= length_b; i++) {
//     a[i] = b[i];
// }
// printf("%s", a);

// int length_a = strlen(a);
// for (int i = 0; i <= length_a; i++) {
//     b[i] = a[i];
// }
// printf("%s", b);

// strcpy(a, b);
// printf("%s", a);

//     return 0;
// }

// string concatenation
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);

    // int length_a = strlen(a);
    // int length_b = strlen(b);

    // for (int i = length_a; i < length_a + length_b; i++) {
    //     a[i] = b[i - length_a];
    // }

    // a[length_a + length_b] = '\0';
    // printf("%s", a);

    // for (int i = 0; i <= length_b; i++) {
    //     a[length_a + i] = b[i];
    // }
    // printf("%s", a);

    strcat(a, b);
    printf("%s", a);

    return 0;
}