#include <stdio.h>
#include <string.h>
#define FILE_NAME "books.txt"
typedef struct {
    int id;
    char title[100];
    float price;
    int quantity;
} Book;
// a) Read and display records
void displayBooks() {
    FILE *fp = fopen(FILE_NAME, "r");
    Book b;
    printf("\nBook Inventory:\n");
    while (fscanf(fp, "%d %s %f %d", &b.id, b.title, &b.price, &b.quantity) != EOF) {
        printf("ID: %d, Title: %s, Price: %.2f, Quantity: %d\n",
               b.id, b.title, b.price, b.quantity);
    }
    fclose(fp);
}
// b) Count total books
void countBooks() {
    FILE *fp = fopen(FILE_NAME, "r");
    Book b;
    int count = 0;
    while (fscanf(fp, "%d %s %f %d", &b.id, b.title, &b.price, &b.quantity) != EOF) {
        count++;
    }
    fclose(fp);
    printf("Total number of books: %d\n", count);
}
// c) Filter low stock books (e.g., quantity < 5)
void filterLowStock() {
    FILE *fp = fopen(FILE_NAME, "r");
    Book b;
    printf("\nBooks with low stock (less than 5):\n");
    while (fscanf(fp, "%d %s %f %d", &b.id, b.title, &b.price, &b.quantity) != EOF) {
        if (b.quantity < 5) {
            printf("ID: %d, Title: %s, Quantity: %d\n", b.id, b.title, b.quantity);
        }
    }
    fclose(fp);
}
// d) Calculate inventory value (price * quantity)
void calculateInventoryValue() {
    FILE *fp = fopen(FILE_NAME, "r");
    Book b;
    float totalValue = 0;
    while (fscanf(fp, "%d %s %f %d", &b.id, b.title, &b.price, &b.quantity) != EOF) {
        totalValue += b.price * b.quantity;
    }
    fclose(fp);
    printf("Total inventory value: ₹%.2f\n", totalValue);
}
// e) Find longest book title
void longestBookTitle() {
    FILE *fp = fopen(FILE_NAME, "r");
    Book b;
    char longestTitle[100];
    while (fscanf(fp, "%d %s %f %d", &b.id, b.title, &b.price, &b.quantity) != EOF) {
        if (strlen(b.title) > strlen(longestTitle)) {
            strcpy(longestTitle, b.title);
        }
    }
    fclose(fp);
    printf("Longest book title: %s\n", longestTitle);
}
int main() {
    int choice;
    do {
        printf("\n--- Library Inventory Menu ---\n");
        printf("1. Display All Books\n");
        printf("2. Count Total Books\n");
        printf("3. Show Low Stock Books\n");
        printf("4. Calculate Inventory Value\n");
        printf("5. Longest Book Title\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: displayBooks(); break;
            case 2: countBooks(); break;
            case 3: filterLowStock(); break;
            case 4: calculateInventoryValue(); break;
            case 5: longestBookTitle(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);
    return 0;
}
