#include <stdio.h>

// a) Define the global counter using extern
int globalCounter = 0;

// a) Global counter function
void trackGlobal() {
    globalCounter++;
    printf("Global count: %d\n", globalCounter);
}

// b) Local static counter function
void trackLocalStatic() {
    static int localCount = 0;  // retains value between calls
    localCount++;
    printf("Local static count: %d\n", localCount);
}

// c) Register usage in performance loop
void performanceLoop() {
    printf("Register variable inside loop: ");
    for (register int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// d) Auto keyword usage (default for local variables)
void autoExample() {
    auto int x = 10; // same as int x = 10;
    auto float y = 5.5;
    printf("Auto variable x: %d\n", x);
    printf("Auto variable y: %.1f\n", y);
}
