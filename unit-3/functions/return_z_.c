#include<stdio.h> 
int add(int,int); //function declaration 
void main() 
{ 
 int a,b,c; 
 printf("\nEnter 2 numbers:"); 
 scanf("%d%d",&a,&b); 
 c=add(a,b);          //Function call 
 printf("\nSum=%d",c); 
} 
int add(int x,int y)          //Function definition 
{ 
 int z; 
 z=x+y; 
}