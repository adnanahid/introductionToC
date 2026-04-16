#include <stdio.h>
 
int main() {
    // 1. Declare variables
    int i;
    long long ll;
    char ch;
    float f;
    double d;
 
    // 2. Read the values using format specifiers
    // Space in "%c" helps skip any leading whitespace/newlines
    scanf("%d %lld %c %f %lf", &i, &ll, &ch, &f, &d);
 
    // 3. Print the values, each followed by a newline (\n)
    // Note: %g or standard %f can be used, but %d/%lld are strict.
    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", ch);
    printf("%.2f\n", f);
    printf("%.1f\n", d);
 
    return 0;
}