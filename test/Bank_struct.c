//create a strcture for bank account with Attributes:
//account no:
//account holder name:
// account balance:


//------menu-------
// enter the detail of bank account
// credit balance
// debit balance
// display bank account detail

#include <stdio.h>

// Define structure
struct BankAccount {
    int accountNo;
    char holderName[100];
    float balance;
};

int main() {
    struct BankAccount account;
    int choice;
    float amount;

    do {
        // Display menu
        printf("\n------ MENU ------\n");
        printf("1. Enter Bank Account Details\n");
        printf("2. Credit Balance\n");
        printf("3. Debit Balance\n");
        printf("4. Display Bank Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &account.accountNo);

                printf("Enter Account Holder Name: ");
                scanf("%s", account.holderName);  
                
                printf("Enter Initial Balance: ");
                scanf("%f", &account.balance);
                break;

            case 2:
                printf("Enter amount to credit: ");
                scanf("%f", &amount);
                account.balance += amount;
                printf("Amount credited successfully.\n");
                break;

            case 3:
                printf("Enter amount to debit: ");
                scanf("%f", &amount);
                if (amount <= account.balance) {
                    account.balance -= amount;
                    printf("Amount debited successfully.\n");
                } else {
                    printf("Insufficient balance.\n");
                }
                break;

            case 4:
                printf("\n--- Account Details ---\n");
                printf("Account Number: %d\n", account.accountNo);
                printf("Account Holder Name: %s\n", account.holderName);
                printf("Account Balance: %.2f\n", account.balance);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
