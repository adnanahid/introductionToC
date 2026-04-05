// 1. The "Ghost" Number (Finding the Missing Element)
// This is a classic "Big O" efficiency problem.
// The Setup: You have an array of $N$ integers. It contains all numbers from 1 to 10, but one number is missing (e.g., 1, 2, 3, 5, 6, 7, 8, 9, 10).

// The Problem: How do you find the missing number (4) using only one loop and no extra arrays?
// Hint: Use the Sum Formula you might know from math: $Sum = \frac{n(n+1)}{2}$. Calculate what the sum should be, and compare it to what it is.

#include <stdio.h>

int main()
{
    int i;
    int actual_sum = 0; // Now it starts clean!
    int actual_length;
    int expected_sum;
    int myNumbers[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    actual_length = myNumbers[length - 1];
    expected_sum = (actual_length * (actual_length + 1)) / 2;
    for (i = 0; i < length; i++)
    {
        actual_sum = actual_sum + myNumbers[i];
    };
    printf("actual sum is %d and expected sum is %d \n", actual_sum, expected_sum);
    int missing_number = expected_sum - actual_sum;
    if (missing_number)
    {
        printf("The missing sum is is %d", missing_number);
    }
    else
    {
        printf("No missing number");
    }
    return 0;
}
