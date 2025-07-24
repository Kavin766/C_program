#include <stdio.h>
#include <string.h>
int main() {
    char name[100], message[100], greeting[200];
    printf("Enter customer's first name: ");
    scanf("%s", name);
    printf("Enter greeting message: ");
    getchar(); 
    fgets(message, 100, stdin);  
    message[strcspn(message, "\n")] = '\0';
    strcpy(greeting, message);     
    strcat(greeting, ", ");        
    strcat(greeting, name);         
    strcat(greeting, "!");       
    printf("\nPersonalized Greeting:\n%s\n", greeting);
    return 0;
}
