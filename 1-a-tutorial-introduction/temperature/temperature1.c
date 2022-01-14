#include <stdio.h>

/* Section 1.2 - Variables and Arithmetic Expressions */

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit of temperature table */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        /* multiply by 5 first, and then divide by 9
            instead of just multiplying by 5/9 because
            integer division TRUNCATES! That is,
            any fractional part is discarded: 5/9 = 0 */
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}