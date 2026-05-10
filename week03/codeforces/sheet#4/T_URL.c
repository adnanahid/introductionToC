// #include <stdio.h>

// int main() {
//     char url[10005];
//     scanf("%s", url);

//     char keys[5][20] = {"username", "pwd", "profile", "role", "key"};
//     int start = 0;

//     for (int i = 0; i < 5; i++) {
//         while (url[start] != '=')
//             start++;
//         start++;

//         printf("%s: ", keys[i]);
//         while (url[start] != '&' && url[start] != '\0') {
//             putchar(url[start]);
//             start++;
//         };
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    char url[10001];
    char username[1001], pwd[1001], profile[1001], role[1001], key[1001];

    scanf("%s", url);

    sscanf(url,
           "http://www.%*[^/]/%*[^/]/%*[^?]?username=%[^&]&pwd=%[^&]&profile=%[^&]&role=%[^&]&key=%s",
           username, pwd, profile, role, key);

    printf("username: %s\n", username);
    printf("pwd: %s\n", pwd);
    printf("profile: %s\n", profile);
    printf("role: %s\n", role);
    printf("key: %s\n", key);

    return 0;
}