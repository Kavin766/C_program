#include<stdio.h> 
void main() 
{ 
 int i,j,n,x,a[10],flag=0; 
 printf("Enter number of elements in array:"); 
 scanf("%d",&n); 
 for(i=1;i<=n;i++)
 {
  printf("\nEnter elements:"); 
  scanf("%d",&a[i]);
 } 
 printf("\nEnter the value to be searched:"); 
 scanf("%d",&x); 
 for(i=1;i<=n;i++) 
 { 
  if(a[i]==x) 
  { 
   printf("\nElement %d is found at location:%d",x,i); 
   flag=1; 
  } 
 } 
 if(flag==0) 
  printf("\nElement not found"); 
}