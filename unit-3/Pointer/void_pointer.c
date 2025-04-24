/*#include <stdio.h>

int main() {
    float num = 10.88888;
    void *ptr;  // Declare a void pointer
    ptr = &num; // Assign the address of an int variable

    // Cannot directly dereference a void pointer, must cast it first
    printf("Value of num: %.3f\n", *(float*)ptr);
    printf("%d",ptr);

    return 0;
}
    #include <stdio.h>

int main() {
    float num = 10.12345;  // Declare a float variable
    void *ptr;  // Declare a void pointer
    ptr = &num; // Assign the address of the float variable

    // Cast void pointer to float pointer before dereferencing
    printf("Value of num: %.2f\n", *(float*)ptr);

    return 0;
}*/
#include <stdio.h>

int main() {
    float num = 10.88888;
    void *ptr;   // Declare a void pointer
    ptr = &num;  // Assign the address of a float variable

    // Properly cast the void pointer before dereferencing
    printf("Value of num: %.3f\n", *( (float*) ptr));

    // Correctly print the pointer address using %p (for pointer addresses)
    printf("Address of num: %p\n", (void*)ptr);

    return 0;
}
