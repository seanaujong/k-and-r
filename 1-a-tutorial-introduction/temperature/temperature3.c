#include <stdio.h>

/* Exercise 1-3. Modify the temperature conversion program
    to print a heading above the table */

/* Exercise 1-4. Write a program to print the corresponding
    Celsius to Fahrenheit table */

/* print Celsius-Fahrenheit table
    for celsius = 0, 5, ..., 100; */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 100;    /* upper limit */
    step = 5;       /* step size */

    /* TODO: is the a better way to format this? */
    printf("  F      C\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius+32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
