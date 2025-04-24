#include <stdio.h> 
#define are(k) (3.14*k*k) 
int main() 
{ 
    int radiu;
    float a; 
    printf("Enter the radius of circle :"); 
    scanf("%d", &radiu); 
    a = are(radiu);
    printf("Area of Circle=%f", a); 
}