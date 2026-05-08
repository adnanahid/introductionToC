
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}
 
int main() {
    int N, Q;
    char s[2001]; 
 
    if (scanf("%d %d", &N, &Q) != 2) return 0;
    scanf("%s", s);
 
    int len = N;
 
    while (Q--) {
        char query[20];
        scanf("%s", query);
 
        if (strcmp(query, "pop_back") == 0) {
            if (len > 0) {
                s[len - 1] = '\0';
                len--;
            }
        } 
        else if (strcmp(query, "front") == 0) {
            printf("%c\n", s[0]);
        } 
        else if (strcmp(query, "back") == 0) {
            printf("%c\n", s[len - 1]);
        } 
        else if (strcmp(query, "sort") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            if (l > r) { int temp = l; l = r; r = temp; }
            qsort(&s[l - 1], r - l + 1, sizeof(char), compare);
        } 
        else if (strcmp(query, "reverse") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            if (l > r) { int temp = l; l = r; r = temp; }
            int start = l - 1;
            int end = r - 1;
            while (start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        } 
        else if (strcmp(query, "print") == 0) {
            int pos;
            scanf("%d", &pos);
            printf("%c\n", s[pos - 1]);
        } 
        else if (strcmp(query, "substr") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            if (l > r) { int temp = l; l = r; r = temp; }
            for (int i = l - 1; i <= r - 1; i++) {
                printf("%c", s[i]);
            }
            printf("\n");
        } 
        else if (strcmp(query, "push_back") == 0) {
            char x;
            scanf(" %c", &x);
            s[len] = x;
            len++;
            s[len] = '\0';
        }
    }
 
    return 0;
}