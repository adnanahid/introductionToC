// #include <stdio.h>

// int main() {
//     char name[5];
//     scanf("%s", name);
//     printf("%s\n", name);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char name[20];
//     printf("%ld\n", sizeof(name));
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char name[20];
//     scanf("%s", name);
//     int count = 0;
//     while(name[count] != '\0') {
//         count++;
//     }
//     printf("%d\n", count);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//         char name[20];
//         scanf("%s", name);
//         int count = strlen(name);
//         printf("%d\n", count);
//     return 0;
// }

#include <stdio.h>

int main() {
    char string[20] = "Hello\0orld!";
    printf("%s\n", string);
    return 0;
}