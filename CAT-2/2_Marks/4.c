#include <stdio.h>

int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i * i;
    return sum;
}

int main() {
    printf("Sum of squares = %d", sumOfSquares(5));
    return 0;
}
