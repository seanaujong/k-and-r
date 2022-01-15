#include <stdio.h>

/* solution: use floating-point arithmetic instead of integer.
    additionally, augmenting each %d in printf with a width
    causes the numbers to be right-justified in their fields */

/* if an arithmetic operator has one floating-point operand
    and one integer operand, then the integer will be
    converted to floating point before the operation is done */

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while (fahr <= upper) {
        /* 5.0/9.0 is not truncated because
            it is the ratio of two floating points */
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}