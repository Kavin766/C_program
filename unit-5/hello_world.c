#include <stdio.h> 
int main() 
{ 
FILE *fp; 
fp = fopen("D:\\=_= MY_SKILLS !\\github\\C_program\\unit-5\\Writing_files\\hello_world.txt", "w");//opening file 
fprintf(fp, "Hello file by fprintfff...\n");//writing data into file 
fclose(fp);//closing file
}