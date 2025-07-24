#include <stdio.h>
// Function to swap using call by value
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap function:\n");
    printf("a = %d, b = %d\n", a, b);
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(x, y); // Call by value
    printf("After swap (in main):\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}