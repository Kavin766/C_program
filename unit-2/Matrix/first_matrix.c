 #include<stdio.h>
 int main()
 {
 int i,j;
 int m[3][3]={{29,67,54},{56,69,85},{55,64,87}};
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    printf("%d ", m[i][j]);
  }
 printf("\n");
 }
 return 0;
 }