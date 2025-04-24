#include <stdio.h>

// Define nested structures
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int roll;
    struct Date dob; // Nested structure
};

int main() {
    struct Student s = {"John", 101, {115, 8, 2000}};
    
    // Display the student details
    printf("Name: %s\n", s);
    printf("Roll: %d\n", s.roll);
    printf("DOB: %02d-%02d-%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
