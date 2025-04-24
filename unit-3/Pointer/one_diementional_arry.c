   #include<stdio.h>
   void main()
   {
    int a[5]={10,20,30,40,50},*ptr,i;
    ptr=&a[1];
    for(i=0;i<5;i++)
    {
    printf("\n The Value Is : %d",*ptr);
    ptr=ptr+1;
    }
   }