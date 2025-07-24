#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, mean;
    // Get number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];  // Declare array
    // Pointer declaration
    int *ptr = arr;
    // Get array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  // Using pointer to input elements
    }
    // Calculate sum using pointer
    for(i = 0; i < n; i++) {
        sum += *(ptr + i);  // Access elements using pointer
    }
    // Calculate mean
    mean = sum / n;
    // Display results
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    return 0;
}