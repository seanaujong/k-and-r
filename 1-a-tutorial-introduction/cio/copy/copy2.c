#include <stdio.h>

/* any assignment is also an expression
    and has a value, which is the value of
    the left-hand side after the assignment.

    This version centralizes the input -
    there is now only one reference to
    getchar, shrinking the program.
    
    The parentheses around the assignment within
    the condition are necessary. The PRECEDENCE
    of != is higher than that of =, which means
    
    c = getchar() != EOF
    
    is equivalent to
    
    c = (getchar() != EOF)
    
    which has the undesired effect of setting c
    to 0 or 1, depending on whether or not
    the call to getchar encountered end of file */

/* copy input to output; 2nd version */
int main()
{
    int c;

    printf("EOF: %d\n", EOF);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
