#include<stdio.h>
int add (int, int);               //int add (int b, int l);   epidikuda pannalam
void main () {
    int k, j;
    printf("enter the num for k :");
    scanf("%d",&k);
    printf("enter the num for j :");
    scanf("%d",&j);
    add (k,j);
}
int add(int b, int l){
    int c;
    c=b+l;
    printf ("adding of two numbers %d",c);
    return 0;
}
