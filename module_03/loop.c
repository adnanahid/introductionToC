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

// 4. The "Star Pyramid" (Nested Loops - Advanced)
// This is the ultimate test of "Spatial Logic." You need a loop inside another loop.
// Problem: Ask the user for the number of rows (e.g., 4).
// Output:
// Plaintext
//    *
//   ***
//  *****
// *******

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows: \n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     int sum = 0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     printf("%d", sum);
//     return 0;
// }

//  problem: find the guessed number
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int guess;
//     do {
//         scanf("%d", &guess);
//         if (guess < n) {
//             printf("Too low! Try again.\n");
//         } else if (guess > n) {
//             printf("Too high! Try again.\n");
//         } else {
//             printf("Congratulations! You guessed the number.\n");
//         }
//     } while (guess != n);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a + b);
//     return 0;
// }

// You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value  C and a character D as input and output them serially.

// #include <stdio.h>

// int main() {
//     int A;
//     long long int B;
//     float C;
//     char D;
//     scanf("%d %lld %f %c", &A, &B, &C, &D);
//     printf("%d\n%lld\n%.2f\n%c", A, B, C, D);
//     return 0;
// }

// I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.

// Here positive integer means those integers that are greater than 0.
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         printf("I Love Practice\n");
//     }
//     return 0;
// }

// You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No Print Yes if the value is divisible by 5 and print No otherwise.

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", i);
//         if (i % 5 == 0) {
//             printf("Yes\n");
//         } else {
//             printf("No\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int i = 0, j = 0;
    for (j = 1; j <= 5; j++) {
        i++;
    }
    printf("%i\n", j);
    return 0;
}