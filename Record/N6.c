#include <stdio.h> 
int main() {
    int terms, count;
    int num1 = 0, num2 = 1, fibonacci;
    printf("Enter how many terms to print: ");
    scanf("%d", &terms);
    printf("Fibonacci Series: ");
    for (count = 0; count < terms; count++) {
        printf("%d ", num1);
        fibonacci = num1 + num2;
        num1 = num2;
        num2 = fibonacci;
    }  
    return 0;
}