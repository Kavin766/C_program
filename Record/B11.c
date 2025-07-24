#include <stdio.h>
#include <math.h>

// Function to calculate distance between two points
float dis(int x1, int y1, int x2, int y2) {
    float distance;
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}

// Function to calculate area of a triangle using Heron's formula
float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    float a, b, c, s, area;

    a = dis(x1, y1, x2, y2);
    b = dis(x1, y1, x3, y3);
    c = dis(x2, y2, x3, y3);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    float A;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    A = area(x1, y1, x2, y2, x3, y3);

    printf("The area of the triangle is: %.2f\n", A);

    return 0;
}