#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter total units consumed: ");
    scanf("%d", &units);
    if(units <= 100) {
        bill = units * 1.50;
    } else if(units <= 300) {
        bill = (100 * 1.50) + ((units - 100) * 2.00);
    } else {
        bill = (100 * 1.50) + (200 * 2.00) + ((units - 300) * 3.50);
    }
    printf("Total Electricity Bill: ₹ %.2f\n", bill);
    return 0;
}
