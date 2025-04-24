#include<stdio.h>
void main ()
{
    char mama[100][50];
    int summa, k;
    printf("Yethena pera pathivu seyanum :");
    scanf("%d",&summa);
    for(k=0;k<summa;k++)
    {
        printf("Peru kuduga bhaiii! :");
        scanf("%s",&mama[k]);
    }
    for(k=0;k<summa;k++)
    {
        printf("Ethelam nega kudutha peru :");
        printf("%s\n",mama[k]);
    }
}