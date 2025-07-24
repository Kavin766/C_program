#include <stdio.h>
#include <string.h>

// Define a structure for book information
struct Book {
    int bookID;
    char title[100];
    char author[100];
    int copiesAvailable;
};

// Function to read book details from the user
void readBooks(struct Book books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].bookID);
        getchar(); // consume newline

        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; // remove newline

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; // remove newline

        printf("Number of Copies Available: ");
        scanf("%d", &books[i].copiesAvailable);
    }
}

// Function to display book information
void displayBooks(struct Book books[], int n) {
    printf("\n%-10s %-30s %-30s %-10s\n", "Book ID", "Title", "Author", "Copies");
    printf("---------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-30s %-30s %-10d\n",
               books[i].bookID, books[i].title, books[i].author, books[i].copiesAvailable);
    }
}

int main() {
    int n;

    printf("Enter the number of books to record: ");
    scanf("%d", &n);

    struct Book books[n];

    readBooks(books, n);
    displayBooks(books, n);

    return 0;
}