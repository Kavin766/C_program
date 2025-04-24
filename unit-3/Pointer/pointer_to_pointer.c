#include<stdio.h> 
void main() 
{ 
 int a=10; 
 int *p1,**p2,***p3; 
 p1=&a; 
 p2=&p1; 
 p3=&p2; 
 printf("\nValue of a is %d",a); 
 printf("\nValue of a is %d",*p1); 
 printf("\nValue of a is %d",**p2); 
 printf("\nValue of a is %d",***p3); 
 printf("\n\nAddress of a is %u",&a); 
 printf("\nAddress of a is %u",p1); 
 printf("\nAddress of p1 is %u",p2); 
 printf("\nAddress of p2 is %u",p3); 
}                                      