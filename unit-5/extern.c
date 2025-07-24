#include<stdio.h> 
int i=100; 
void fun1(void); 
void fun2(void); 
void main() 
{ 
fun1(); 
fun2(); 
printf("\nValue of i in main function is %d",i); 
} 
void fun1() 
{ 
int i=200; 
printf("\nValue of i in function1 is %d",i); 
} 
void fun2() 
{ 
printf("\nValue of i in function2 is %d",i);    
} 