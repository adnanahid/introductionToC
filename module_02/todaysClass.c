// problem 01: The "Quadrant" Finder (Physics/Math)
// In Coordinate Geometry, a point (x,y) can be in one of four quadrants.
// Problem: Take two integers x and y from the user.
// Task: Use if...else if to determine where the point lies:
// solution
// #include <stdio.h>
// int main()
// {
//     int x, y;
//     scanf("%d %d", &x, &y);

//     if (x > 0 && y > 0)
//     {
//         printf("Quadrant 01");
//     }
//     else if (x < 0 && y > 0)
//     {
//         printf("Quadrant 02");
//     }
//     else if (x < 0 && y < 0)
//     {
//         printf("Quadrant 03");
//     }
//     else if (x > 0 && y < 0)
//     {
//         printf("Quadrant 04");
//     }
//     else
//     {
//         printf("origin");
//     }

//     return 0;
// }

// problem 02: The "Short-Circuit" Max (Conditional Operator)
// The Conditional Operator (condition ? true : false) is like a mini if...else that returns a value.
// Problem: Take three numbers a, b, and c.
// Task: Find the Maximum of the three using only one line of code with the Conditional Operator.
// Hint: You can "nest" them: max = (a > b) ? ( (a > c) ? a : c ) : ( (b > c) ? b : c );
// Goal: Don't use a single if statement!
// solution
// #include <stdio.h>
// int main()
// {
//     int a, b, c, max;
//     scanf("%d %d %d", &a, &b, &c);
//     max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//     printf("the max num is %d", max);
//     return 0;
// }

// problem 03: The "Electric Bill" Calculator (Tiered Logic)
// This is a very common "real-world" interview problem.
// Problem: Take the number of units of electricity consumed.
// Task: Calculate the total bill based on these tiers:
// First 50 units: 5 Taka/unit
// Next 100 units (51-150): 7 Taka/unit
// Above 150 units: 10 Taka/unit
// Logic Trap: If someone uses 160 units, they pay $50 \times 5$ PLUS $100 \times 7$ PLUS $10 \times 10$. You can't just multiply the whole 160 by 10!
// solution
// #include <stdio.h>
// int main()
// {
//     int units, bill;
//     scanf("%d", &units);
//     if (units > 0 && units <= 50)
//     {
//         bill = units * 5;
//         printf("Your bill is %d", bill);
//     }
//     else if (units > 50 && units <= 150)
//     {
//         bill = 50 * 5 + (units - 50) * 7;
//         printf("Your bill is %d", bill);
//     }
//     else
//     {
//         bill = 50 * 5 + 150 * 7 + (units - 150) * 10;
//         printf("Your bill is %d", bill);
//     }
//     return 0;
// }

// problem 04: The "Triangle Validity" Test
// A triangle is only valid if the sum of any two sides is greater than the third side ($a + b > c$).
// Problem: Take three sides a, b, and c as input.
// Task: Use a single if statement with Logical Operators (&&) to check if a triangle can be formed.
// Output: Print "Valid Triangle" or "Invalid Triangle."

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
    return 0;
}