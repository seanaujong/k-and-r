#include <stdio.h>

/* Section 1.5 - Character Input and Output */

/* copy input to output; 1st version */
int main()
{
    /* we must declare c to be a type big enough
        to hold any value that getchar returns.
        We can't use char since c must be
        big enough to hold EOF in addition to any
        possible char. Therefore we use int. */
    int c;

    /* EOF is an int defined in <stdio.h> */
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar()
    }
}
