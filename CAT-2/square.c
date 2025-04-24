#include <stdio.h>

int squareSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i * i;
        printf("\n%d",sum);}
    return sum;
}

int main() {
    printf("\nSum of squares = %d\n", squareSum(5));
    return 0;
}
