#include<stdio.h> 
int main() 
{ 
char name[50][20]; 
int n,i; 
printf("enter the number of students in class"); 
scanf("%d",&n); 
printf("enter the students name\n"); 
for(i=0;i<n;i++) 
scanf("%s",name[i]); 
printf("students name are\n"); 
for(i=0;i<n;i++) 
printf("%s\n",name[i]); 
}