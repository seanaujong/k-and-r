#include <stdio.h>

/* count characters in input; 2nd version */

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; // null statement, since for loops need a body
    printf("%.0f\n", nc);
}
