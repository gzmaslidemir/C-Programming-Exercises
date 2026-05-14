#include <stdio.h>

int main() {

    // Variables for account balance, menu choice, and transaction amount
    double accountBalance = 0.0;
    int choice;
    double amount;

    // Keep showing menu until user exits
    do {

        // Display banking menu
        printf("\nBanking Menu:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform action based on user choice
        switch(choice) {

            case 1: // Deposit Money

                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);

                if (amount <= 0) {
                    printf("Error: Deposit amount must be positive.\n");
                } else {
                    accountBalance += amount;
                    printf("Deposit successful. New balance: $%.2f\n", accountBalance);
                }

                break;

            case 2: // Withdraw Money

                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);

                if (amount <= 0) {
                    printf("Error: Withdrawal amount must be positive.\n");
                } else if (amount > accountBalance) {
                    printf("Error: Insufficient funds.\n");
                } else {
                    accountBalance -= amount;
                    printf("Withdrawal successful. New balance: $%.2f\n", accountBalance);
                }

                break;

            case 3: // Check Balance

                printf("Current balance: $%.2f\n", accountBalance);

                break;

            case 4: // Exit

                printf("Exiting program. Goodbye!\n");

                break;

            default: // Invalid Choice

                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
