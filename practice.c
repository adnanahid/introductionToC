// 1. The Simple Interest CalculatorA great way to practice float and double.
/* Problem : Ask the user to input the Principal amount(money borrowed), the Rate of interest, and the Time in years.
Formula : $SI = \frac{P \times R \times T} {100} $
Challenge : Print the result rounded to exactly 2 decimal places(e.g., 100.50).*/

#include <stdio.h>
int main()
{
    double principal_amount, total_interest, total_amount;
    float rate_of_interest, time_in_year;

    scanf("%lf"
          "%f"
          "%f",
          &principal_amount, &rate_of_interest, &time_in_year);

    total_interest = (principal_amount * rate_of_interest * time_in_year) / 100;
    total_amount = principal_amount + total_interest;

    printf("total amount %.2lf", total_amount);

    return 0;
}


// 2. The ASCII "Spy" Program This will help you understand why the compiler says char is an int.
/* Problem: Ask the user to enter a single character using %c.
Output: Print that character, then on the next line, print its Integer (ASCII) value using %d.
Example Input: A → Output: Character: A, ASCII Value: 65.*/

// #include <stdio.h>

// int main()
// {

//     char alphabet;
//     scanf("%c", &alphabet);

//     printf("the char is \"%c\" \n", alphabet);
//     printf("the char ascii valuse is %d", alphabet);

//     return 0;
// }

// 3. Temperature Converter (Celsius to Fahrenheit)Since you are a Physics student, you'll use these conversions often!

/* Problem: Take a temperature input in Celsius.
Formula: $F = (C \times \frac{9}{5}) + 32$
Challenge: Try to write the fraction 9/5 in a way that C doesn't treat it as "1" (Integer Division). Use 9.0 / 5.0.*/

// #include <stdio.h>

// int main()
// {
//     float celcius;
//     scanf("%f", &celcius);
//     float fernhite;
//     fernhite = (celcius * (9.0 / 5.0)) + 32;
//     printf("temp in fernfite is %f", fernhite);
//     return 0;
// }
