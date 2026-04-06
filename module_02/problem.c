// problem 01: Take a number from user and check if its a even number or odd number.

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

#include <stdio.h>
int main()
{
    int the_number;
    scanf("%d", &the_number);
    if (the_number > 0)
    {
        printf("The number is positive");
    }
    else if (the_number < 0)
    {
        printf("The number is negative");
    }
    else
    {

        printf("The number is zero");
    }
    return 0;
}



// problem 03: Explain if else ladder.