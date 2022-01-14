#include <stdio.h>

/*
 In c1 p6, they omit the "int", this causes
 "warning: return type defaults to 'int' [-Wimplicit-int]"
 */
int main()
{
    printf("hello, world\n");
}
