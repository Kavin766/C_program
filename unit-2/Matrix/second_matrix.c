#include<stdio.h>
void main () 
{
    int nan, yen, hi[3][3]={{3,4,5},{5,6,8},{3,8,6}};
    for(nan=0;nan<3;nan++);
    {
        for(yen=0; yen<3;yen++)
        {
            printf("%d",hi[nan][yen]);
        }
    printf("\n");
    }
}