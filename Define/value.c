#include <stdio.h> 
#define A 10 
#define X 10  // Define X with value 10

int main() 
{ 
    int a;
    a=10;
#if (A> 5)
    printf("A=%d\n", X);  // Will print X since A > 5
#elif (A < 5)
    printf("A=%d\n", 4);  // This block won't execute as A is not less than 5
#else 
    // If neither condition is true (if A were exactly 5), we would go here.
#endif 
    printf("A=%d\n", 0);  // This always runs, printing 0
    return 0; 
}
