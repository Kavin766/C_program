#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    float marks[n];
    for (int i = 0; i < n; i++) {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    printf("Average = %.2f", sum / n);
    return 0;
}
