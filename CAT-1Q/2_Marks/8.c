#include <stdio.h>
int main() {
    int x;
    if (scanf("%d", &x)) {
        printf("Read");
    } else {
        printf("Not Read");
    }
    return 0;
}
