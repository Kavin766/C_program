#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
int num; 
FILE *fptr; 
fptr = fopen("D:\\=_= MY_SKILLS !\\github\\C_program\\unit-5\\Writing_files\\Enter_num.txt","w"); 
if(fptr == NULL) 
{ 
printf("Error!"); 
exit(1);
} 
printf("Enter num: "); 
scanf("%d",&num); 
fprintf(fptr,"%d",num); 
fclose(fptr);
return 0; 
}