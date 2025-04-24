#include <stdio.h>
#include <string.h>

// Define a simple recipe database
char recipes[3][10][20] = {
    {"cake", "egg", "sugar", "flour"},       // Recipe 1: cake
    {"omelette", "egg", "salt"},             // Recipe 2: omelette
    {"pancake", "egg", "milk", "flour"}      // Recipe 3: pancake
};

int recipe_ingredients_count[3] = {4, 3, 4}; // includes recipe name

// Function to check if an ingredient exists in the user's list
int has_ingredient(char user_ingredients[][20], int user_count, char *ingredient) {
    for (int i = 0; i < user_count; i++) {
        if (strcmp(user_ingredients[i], ingredient) == 0) {
            return 1;
        }
    }
    return 0;
}

// Function to suggest recipes
void suggest_recipe(char user_ingredients[][20], int user_count) {
    int i, j;
    int found = 0;

    printf("\nSuggested recipes:\n");

    for (i = 0; i < 3; i++) {
        int match = 1;
        for (j = 1; j < recipe_ingredients_count[i]; j++) {
            if (!has_ingredient(user_ingredients, user_count, recipes[i][j])) {
                match = 0;
                break;
            }
        }

        if (match) {
            printf("- %s\n", recipes[i][0]);
            found = 1;
        }
    }

    if (!found) {
        printf("No recipes found with the given ingredients.\n");
    }
}

int main() {
    int n, i;
    char user_ingredients[10][20];

    printf("Enter number of ingredients you have: ");
    scanf("%d", &n);

    printf("Enter your ingredients:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", user_ingredients[i]);
    }

    suggest_recipe(user_ingredients, n);

    return 0;
}
