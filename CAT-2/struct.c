#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float cgpa;
    float fees;
};

int main() {
    struct student S;
    printf("Size of structure student: %lu bytes\n", sizeof(S));
    return 0;
}
