#include <stdio.h>

int main() {
    char firstName1[100], secondName1[100], firstName2[100], secondName2[100];
    scanf("%s %s", firstName1, secondName1);
    scanf("%s %s", firstName2, secondName2);
    if (strcmp(secondName1, secondName2) == 0) {
        printf("ARE Brothers");
    } else {
        printf("NOT");
    }
    return 0;
}