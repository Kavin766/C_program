#include<stdio.h> 
void add(int *,int *); 
void sub(int *,int *); 
void mul(int *,int *); 
void main() 
{ 
 int a,b,choice; 
 printf("\nEnter 2 numbers:"); 
 scanf("%d%d",&a,&b); 
 printf("1.Addition\n2.Subtraction\n3.Multiplication\n"); 
 printf("Enter your choice:"); 
 scanf("%d",&choice); 
 switch(choice) 
 { 
  case 1:  
   add(&a,&b); 
   break; 
  case 2:
   sub(&a,&b); 
   break; 
  case 3: 
   mul(&a,&b); 
   break; 
  default: 
   printf("Enter correct choice"); 
   break; 
 } 
} 
void add(int *a,int *b) 
{ 
 int *add; 
*add=*a+*b; 
 printf("\nSum=%d",*add); 
} 
void sub(int *a,int *b) 
{ 
 int *sub; 
 *sub=*a-*b; 
 printf("\nSubtraction=%d",*sub); 
} 
void mul(int *a,int *b) 
{ 
 int *mul; 
 *mul=*a**b; 
 printf("\nMultiplication=%d",*mul); 
} 