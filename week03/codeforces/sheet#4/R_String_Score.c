// Given a number N and a string Sof size N consisting of 5 different uppercase characters only {V,W,X,Y,Z}.

// X: Removes the next consecutive character from the string.
//

// Z: If the next consecutive character is V it divides the total score by 5
// but if it is W it divides the total score by 2.
// Then it removes the next consecutive character from the string if and only if the next character is V or W.

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int len = n;
    int score = 0;

    for (int i = 0; i < len; i++) {
        // V: Adds to the score 5 points.
        if (s[i] == 'V') {
            score = score + 5;
        }
        // W: Adds to the score 2 points.
        else if (s[i] == 'W') {
            score = score + 2;
        }
        // X: Removes the next consecutive character from the string.
        else if (s[i] == 'X') {
            if (i + 1 < len) {

                for (int x = i + 1; x < len - 1; x++) {
                    s[x] = s[x + 1];
                }
                len--;
                s[len] = '\0';
            }
        }
        // Y: Moves the next consecutive character to the end of the string.
        else if (s[i] == 'Y') {
            if (i + 1 < len) {
                char temp = s[i + 1];

                for (int y = i + 1; y < len - 1; y++) {
                    s[y] = s[y + 1];
                }

                s[len - 1] = temp;
            }
        }
        // Z: If the next consecutive character is V it divides the total score by 5
        // but if it is W it divides the total score by 2.
        // Then it removes the next consecutive character from the string if and only if the next character is V or W.
        else if (s[i] == 'Z') {
            if (i + 1 < len) {

                if (s[i + 1] == 'V') {
                    score /= 5;
                }

                if (s[i + 1] == 'W') {
                    score /= 2;
                }

                if ((s[i + 1] == 'V') || s[i + 1] == 'W') {
                    for (int x = i + 1; x < len - 1; x++) {
                        s[x] = s[x + 1];
                    }
                    len--;
                    s[len] = '\0';
                }
            }
        }
    }
    printf("%d", score);
    return 0;
}