// problem 01: Take a number from user and check if its a even number or odd number.
// solution
// #include <stdio.h>
// int main()
// {
//     int the_number;
//     scanf("%d", &the_number);
//     if (the_number % 2 == 0)
//     {
//         printf("The number is even");
//     }
//     else
//     {
//         printf("The number is odd");
//     }
//     return 0;
// }



// problem 02: Take a number from user and check if its a positive or negative number.
// solution
// #include <stdio.h>
// int main()
// {
//     int the_number;
//     scanf("%d", &the_number);
//     if (the_number > 0)
//     {
//         printf("The number is positive");
//     }
//     else if (the_number < 0)
//     {
//         printf("The number is negative");
//     }
//     else
//     {

//         printf("The number is zero");
//     }
//     return 0;
// }



// problem 03: The "Palindrome" Number (No Strings Allowed!)
// The Problem: Take an integer (like 121 or 12321).
// Task: Determine if it is a Palindrome (reads the same backward and forward).
// The Catch: You cannot convert it to a string. You must use % 10 to peel off the last digit and * 10 to build the number backward.
// Hint: If you take 123 % 10, you get 3. If you then do 123 / 10, you get 12. Keep going!
// solution
// #include <stdio.h>

// int main()
// {
//     return 0;
// }



// problem 04: The "Power of Two" Stealth Check
// This looks like a math problem, but it’s actually a "Bitwise" secret.
// The Problem: Ask the user for a number. Tell them if it is a Power of Two (2, 4, 8, 16, 32...).
// The Goal: Do it without using a loop.
// The Mindblower Hint: Computers store numbers in Binary. A power of two in binary looks like 1000. The number right before it looks like 0111. What happens if you use the "Bitwise AND" operator (&) on them?



// problem 05: The "Leap Year" Logic Trap
// Every beginner thinks this is easy until they see the actual rules of the Gregorian calendar.
// The Problem: Take a year as input. Determine if it's a Leap Year.
// The Logic: 1.  A year is a leap year if it is divisible by 4...
// 2.  UNLESS it is divisible by 100...
// 3.  UNLESS that year is also divisible by 400.
// Task: Write this using only one if statement (using && and ||).



// problem 06: The "Binary Flip" (Advanced)
// Since you're learning computer architecture:
// The Problem: Take an integer and print how many 1s are in its binary representation.
// Example: The number 7 is 0111 in binary. The answer is 3.
// Why this is an interview favorite: It tests if you understand that int n = 7; is actually a collection of 32 bits under the hood.