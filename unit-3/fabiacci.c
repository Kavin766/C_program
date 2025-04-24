#include<stdio.h>
 intfibonacci(int);
 intmain()
 {
 intn, i;
 printf("Enter Total terms\n");
 scanf("%d", &n);
 printf("Fibonacci series terms are\n");
 for(i= 0; i<n; i++)
 {
 printf("%d ", fibonacci(i));
 }
 return 0;
 }
 intfibonacci(intn)
 {
 if(n == 0 || n == 1)
 return n;
 else
 return(fibonacci(n-1) + fibonacci(n-2));
 }