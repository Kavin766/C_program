#include <stdio.h>
#include <string.h>

#define MAX 100

// Structure to store Date of Birth
struct DOB {
    int day;
    int mon;
    int year;
};

// Structure to store Friend details
struct Friend {
    char name[50];
    char city[50];
    struct DOB dob;
};

int main() {
    struct Friend friends[MAX];
    int n, currentMonth;

    printf("Enter number of friends: ");
    scanf("%d", &n);

    // Read friend details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of friend %d:\n", i + 1);

        printf("Name: ");
        scanf(" %s", &friends[i].name);  // read string with spaces

        printf("City: ");
        scanf(" %[^\n]", friends[i].city);

        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &friends[i].dob.day, &friends[i].dob.mon, &friends[i].dob.year);
    }

    // Read current month
    printf("\nEnter current month (1-12): ");
    scanf("%d", &currentMonth);

    // Display friends whose birthday falls in current month
    printf("\nFriends with birthday in month %d:\n", currentMonth);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (friends[i].dob.mon == currentMonth) {
            printf("\nName: %s\n", friends[i].name);
            printf("City: %s\n", friends[i].city);
            printf("DOB: %02d-%02d-%04d\n", friends[i].dob.day, friends[i].dob.mon, friends[i].dob.year);
            found = 1;
        }
    }

    if (!found) {
        printf("No birthdays this month.\n");
    }

    return 0;
}