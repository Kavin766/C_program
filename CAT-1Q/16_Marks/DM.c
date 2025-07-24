#include <stdio.h>
int main() {
    int marks[100], n, i, j, found = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks (between 30 and 85):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(marks[i] == marks[j]) {
                found = 1;
                printf("Duplicate mark found: %d\n", marks[i]);
            }
        }
    }
    if(!found) {
        printf("No duplicate marks found.\n");
    }
    return 0;
}
