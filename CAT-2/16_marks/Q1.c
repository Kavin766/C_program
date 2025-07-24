 #include <stdio.h>
 int main() {
    float balance = 0.0, amount;
    int choice;
    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) balance += amount;
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) balance -= amount;
                break;
            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;
        }
    } while(choice != 4);
    return 0;
 }  