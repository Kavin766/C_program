#include <stdio.h>

int main() {
    int a = 10, b = 5, result;
    int x = 1, y = 0;
    
    printf("1. Arithmetic Operators:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n\n", a, b, a % b);  // %% for printing %

    printf("2. Relational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n\n", a <= b);

    printf("3. Logical Operators:\n");
    printf("x && y = %d\n", x && y);   // AND
    printf("x || y = %d\n", x || y);   // OR
    printf("!x = %d\n\n", !x);         // NOT

    printf("4. Assignment Operators:\n");
    result = a;
    printf("result = a: %d\n", result);
    result += b;
    printf("result += b: %d\n", result);
    result -= b;
    printf("result -= b: %d\n", result);
    result *= b;
    printf("result *= b: %d\n", result);
    result /= b;
    printf("result /= b: %d\n\n", result);

    printf("5. Increment/Decrement Operators:\n");
    int c = 5;
    printf("Original c: %d\n", c);
    printf("Post-increment c++: %d\n", c++);
    printf("After post-increment: %d\n", c);
    printf("Pre-decrement --c: %d\n\n", --c);

    printf("6. Conditional (Ternary) Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b is: %d\n\n", max);

    printf("7. Bitwise Operators:\n");
    printf("a & b = %d\n", a & b); // Bitwise AND
    printf("a | b = %d\n", a | b); // Bitwise OR
    printf("a ^ b = %d\n", a ^ b); // Bitwise XOR
    printf("~a = %d\n", ~a);       // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift

    return 0;
}
