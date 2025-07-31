#include <stdio.h>

#define MAX 100

void Create() {
    int i, n;
    int list[MAX];

    printf("Enter number of elements (max %d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        printf("Invalid size.\n");
        return;
    }

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &list[i]) != 1) {
            printf("Invalid input at index %d.\n", i);
            return;
        }
    }

    // optional: print to verify
    printf("You entered: ");
    for (i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");
}
