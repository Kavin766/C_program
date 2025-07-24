#include <stdio.h>

int main() 
{
    int A, B;

    printf("Enter the mark in subject A: ");
    scanf("%d", &A);

    printf("Enter the mark in subject B: ");
    scanf("%d", &B);

    if (A >= 55 && B >= 45)
        printf("STUDENT QUALIFIED FOR DEGREE");

    else if (A >= 45 && B >= 55 && A >= 55)
        printf("STUDENT GET PASSED");

    else if (A > 65 && B < 45)
        printf("REAPPEAR FOR EXAM B TO QUALIFY");

    else
        printf("STUDENT DECLARED AS FAIL");

    return 0;
}