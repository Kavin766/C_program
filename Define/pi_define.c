#include <stdio.h>

// Defining PI as a macro
#define PI 3.14

// Function to calculate the area of a circle
float calculateArea(float radius) 
{
    return PI * radius * radius; // Using PI to calculate area
}

int main() 
{
    float radius, area;

    // Ask the user for the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the macro
    area = calculateArea(radius);

    // Display the result
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
