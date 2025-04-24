 #include <stdio.h>
 int main()
 {
 int a[100],ele,index,i,n;
 printf("enter n value");
 scanf("%d",&n);
 printf("enter the elements of array\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the element to insert\n");
 scanf("%d",&ele);
 printf("enter index at which you want to insert\n");
 scanf("%d",&index);
 for(i=n-1;i>=index;i--)
 {
     a[i+1]=a[i];
 }
 a[index]=ele;
 printf("elements of the array are\n");
 for(i=0;i<=n;i++)
 printf("%d ",a[i]);
 return 0;
 }