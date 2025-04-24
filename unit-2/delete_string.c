 #include <stdio.h>
 int main()
 {
 int a[100],index,i,n;
 printf("enter n value");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the index of element you want to delete\n");
 scanf("%d",&index);
 for(i=index;i<=n;i++)
 {
 //a[i]=a[i+1];
     a[i+1]=a[i];
 }
 //n=n-1;
 printf("elements of the array are\n");
 for(i=0;i<n-1;i++)
 printf("%d ",a[i]);
 return 0;
 }
 