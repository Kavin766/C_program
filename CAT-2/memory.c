#include <stdio.h>

union inner {
    int x;
    float y;
};

union outer {
    char name[20];
    union inner data;
};

int main() {
    union outer O;
    printf("Memory required for union outer: %lu bytes\n", sizeof(O.data));
    return 0;
}
