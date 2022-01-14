#include <stdio.h>

/* Section 1.3 - The For Statement */

/* print Fahrenheit-Celsius table
    using a for loop */
int main()
{
    int fahr;
    
    /*  1. initialize fahr = 0
        2. check condition fahr <= 300
        3. execute body if true
        4. increment fahr = fahr + 20
        5. repeat 2-4 until !condition */
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
