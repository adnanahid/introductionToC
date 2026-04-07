// 1. The "Multiplication Table" (Basic)
// This is the "Hello World" of loops.
// Problem: Ask the user for an integer $n$.
// Task: Print the multiplication table for that number from 1 to 10.
// Output Format: 5 x 1 = 5, 5 x 2 = 10, etc.Why: This teaches you how the "Iterator" ($i$) changes every time the loop runs.
// #include <stdio.h>

// int main(void) {
//     int x;
//     scanf("%d", &x);

//     for (int i = 1; i <= 10; i++) {
//         printf("%d\n", i * x);
//     }

//     return 0;
// }

// 2. The "Factorial" Calculator (Intermediate)
// In Physics and Math, $n!$ (n factorial) is huge.
// Problem: Take an integer $n$.
// Task: Calculate $n!$ (e.g., $5! = 5 \times 4 \times 3 \times 2 \times 1 = 120$).
// The Trap: If the user enters 0, the answer is 1. If they enter a large number (like 20), an int will overflow! Use long long int for the result.

// #include <stdio.h>

// int main() {
//     int n;
//     int total = 1;
//     scanf("%d", &n);
//     while (n >= 1) {
//         total = total * n;
//         n--;
//     }
//     printf("%d", total);
// }

// 3. The "Fibonacci" Sequence (Logic Builder)
// This is the most famous sequence in nature and computer science.
// Problem: Print the first $n$ terms of the Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13...

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int first_fibonacci = 0;
//     int second_fibonacci = 1;
//     for (int i = 2; i <= n; i++) {
//         printf("%d \n", first_fibonacci + second_fibonacci);
//         int next_fibonacci = first_fibonacci + second_fibonacci;
//         first_fibonacci = second_fibonacci;
//         second_fibonacci = next_fibonacci;
//     }
//     return 0;
// }