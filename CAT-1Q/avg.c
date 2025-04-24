#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number of marks: ");
    scanf("%d", &n);
    int marks[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Average: %.2f", (float)sum/n);
    return 0;
}
