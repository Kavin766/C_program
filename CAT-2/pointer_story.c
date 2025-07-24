#include <stdio.h>
int main() {
int n ;int *ptr;
ptr=&n;
printf("Enter a number: ");
scanf("%d", &n);
printf("The value of n is: %d\n", *ptr);
printf("The address of n is: %p\n", (void*)ptr);
}
