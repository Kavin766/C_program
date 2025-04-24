#include<stdio.h> 
void main() 
{ 
int a[5]={10,20,30,40,50}; 
int i,*ptr[5]; //Pointer & array declaration 

for(i=0;i<5;i++) 
{ 
ptr[i]=&a[i];  //Initialization 
} 
for(i=0;i<5;i++) 
{ 
printf("\nValue of a[%d] = %d",i,*ptr[i]); 
} 
}