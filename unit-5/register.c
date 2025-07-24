#include <stdio.h>

void main()
{
    register int a = 200;
    int *ptr = &a;  // ❌ Error: cannot take address of register variable
    printf("Value of a: %d\n", a);
}
