 #include <stdio.h>
 #include <string.h>
 void suggest_recipe(char ingredients[][20], int count) {
    int hasEgg = 0, hasSugar = 0, hasFlour = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(ingredients[i], "egg") == 0) hasEgg = 1;
        else if (strcmp(ingredients[i], "sugar") == 0) hasSugar = 1;
        else if (strcmp(ingredients[i], "flour") == 0) hasFlour = 1;
    }
    if (hasEgg && hasSugar && hasFlour) {
        printf("Suggested Recipe: Cake\n");
    } else {
        printf("No recipe found for given ingredients.\n");
    }
 }
 int main() {
    int n;
    printf("Enter number of ingredients: ");
    scanf("%d", &n);
    char ingredients[n][20];
    for (int i = 0; i < n; i++) {
        printf("Enter ingredient %d: ", i + 1);
        scanf("%s", ingredients[i]);
    } 
    suggest_recipe(ingredients, n);
    return 0;
 }