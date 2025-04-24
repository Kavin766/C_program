#include<stdio.h> 
void add(int,int); //function declaration 
void main() 
{ 
 int a,b;
 printf("\nEnter 2 numbers:"); 
 scanf("%d%d",&a,&b); 
 add(a,b);                         //Function call
} 
void add(int x,int y)                 //Function Definition
{ 
 int c;
 c=x+y; 
 printf("\nSum=%d",c);
}