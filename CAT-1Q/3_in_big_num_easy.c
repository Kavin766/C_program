#include<stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

 largest = (a > b && a > c) ? a : (b > c ? b : c);

    printf("Largest number is: %d\n", largest);

    return 0;
}