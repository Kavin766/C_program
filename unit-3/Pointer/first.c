#include<stdio.h> 
void main() 
{ 
int a=10; 
int *p; 
p=&a; 
printf("\nAddress of a is %u",p); 
printf("\nValue of a is %d",*p); 
printf("\nAddress of a is %p", (void*)p); 
printf("\nValue of a is %d", *p); 
}