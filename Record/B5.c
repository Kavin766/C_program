#include <stdio.h>

int main() {
    int a[30], pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);

        // Count positive and negative
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;

        // Count even and odd1
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
