#include <stdio.h>
int main() {
    int a;
    char a;  //how assin char + float +int using one variable
    printf("Enter a any thing :");
    if (scanf("%d",&a)) {
        printf("Valid Input");
    } else if(scanf("%s",&a)) {
        printf("Invalid Input");
    }else{
        printf("sorry");
    }
    return 0;
}
