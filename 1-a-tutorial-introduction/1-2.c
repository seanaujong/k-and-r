#include <stdio.h>

/* experiment to find out what happens when
    printf's argument string contains
    \c, where c is some not-special character */

/* Appendix A states:
    If the character following the \ is not one of those
    specific, the behavior is undefined */

int main()
{
    printf("hello, world\y");
    printf("hello, world\7");
    printf("hello, world\?");
}
