#include <stdio.h>

 int main()
 {
 int a[100],i,n;
 printf("enter n value");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("elements of the array are\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 return 0;
 }