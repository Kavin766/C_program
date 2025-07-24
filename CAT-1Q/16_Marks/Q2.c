#include <stdio.h>

int main() {
    int counter = 0;
    char action;

    printf("Simple Counter Program\n");
    printf("Press 'i' to increment, 'd' to decrement, 'q' to quit.\n");

    while (1) {
        printf("\nEnter your action: ");
        scanf(" %c", &action);  // Space before %c to consume any leftover newline

        if (action == 'i') {
            counter++;
            printf("Counter incremented. Current value: %d\n", counter);
        } else if (action == 'd') {
            counter--;
            printf("Counter decremented. Current value: %d\n", counter);
        } else if (action == 'q') {
            printf("Exiting the program. Final counter value: %d\n", counter);
            break;
        } else {
            printf("Invalid input. Please enter 'i', 'd', or 'q'.\n");
        }
    }

    return 0;
}
