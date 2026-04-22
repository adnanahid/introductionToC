#include <stdio.h>

int main() {
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);
    if ((S == '>' && A > B) || (S == '<' && A < B) || (S == '=' && A == B)) {
        printf("Right");
    } else {
        printf("Wrong");
    }
    return 0;
}