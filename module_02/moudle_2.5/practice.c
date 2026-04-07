// problem 01:
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d ", &n);
//     if (n == 0)
//     {
//         printf("Zero");
//     }
//     else
//     {
//         printf("Non Zero");
//     }
//     return 0;
// }

// problem 02:
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int output = n + 5;
//     printf("%d", output);
//     return 0;
// }

// problem 03:
// #include <stdio.h>

// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(a % b == 0 || b % a == 0){
//         printf("Yes");
//     } else {
//         printf("No");
//     }
//     return 0;
// }

// problem 04:
// #include <stdio.h>
// int main(){
//     float x;
//     scanf("%f", &x);
//     printf("%.3f", x);
//     return 0;
// }

// problem 05:
// The "Even-Odd" Stealth Mission (Bitwise + Conditional)
// Problem: Take a number.
// Task: Tell the user if it is Even or Odd.
// The Constraint: You are NOT allowed to use the Modulo operator (%).
// The Physics Hint: In Binary, every Odd number ends with a 1. Use the Bitwise AND operator (&) with the number 1.
// if (n & 1) $\rightarrow$ It's Odd!
// Final Output: Use the Conditional Operator to print the result in one printf.

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n & 1)
//     {
//         printf("odd");
//     }
//     else
//     {
//         printf("even");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{   int n;
    printf("Enter a number: ", n);
    return 0;
}
