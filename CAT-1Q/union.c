#include <stdio.h>

union Data {
    char i;
    float i;
    int i;
};

int main() {
    union Data var;

    var.i = 10;
    printf("Integer: %d\n", var.i);

    var.i = 5.5;
    printf("Float: %f\n", var.i);

    var.i = 'A';
    printf("Character: %c\n", var.i);

    return 0;
}
