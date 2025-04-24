#include<stdio.h> 
#include<string.h> 
int main() 
{ 
char name[50][20],t[20]; 
int n,i,j; 
printf("enter the number of students in class"); 
scanf("%d",&n); 
printf("enter the name\n"); 
for(i=0;i<n;i++) 
{
scanf("%s",name[i]); 
}
for(i=0;i<n;i++) 
{
  for(j=i+1;j<n;j++) 
  { 
    if(strcmp(name[i],name[j])>0) 
    { 
        strcpy(t,name[i]); 
        strcpy(name[i],name[j]); 
        strcpy(name[j],t); 
    } 
  } 
} 
printf("sorted names are\n"); 
for(i=0;i<n;i++) 
printf("%s\n",name[i]); 
}