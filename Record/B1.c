#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter a side: ");
    scanf("%d", &a);
    printf("Enter b side: ");
    scanf("%d", &b);
    printf("Enter c side: ");
    scanf("%d", &c);
    if ((a + b > c) && (b + c > a) && (c + a > b))
        printf("It is valid triangle");
    else
        printf("It is invalid triangle");
    return 0;
}