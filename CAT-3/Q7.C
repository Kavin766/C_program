#include <stdio.h>

// Declare global counter using extern (defined in another file)
extern int globalCounter;

// Function prototypes
void trackGlobal();      // a) Global counter
void trackLocalStatic(); // b) Local static counter
void performanceLoop();  // c) Register variable in loop
void autoExample();      // d) Auto variable example

int main() {
    printf("Calling functions...\n");

    // Call global tracker 3 times
    trackGlobal();
    trackGlobal();
    trackGlobal();

    // Call local static tracker 3 times
    trackLocalStatic();
    trackLocalStatic();
    trackLocalStatic();

    // Run performance loop
    performanceLoop();

    // Demonstrate auto usage
    autoExample();

    return 0;
}
