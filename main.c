#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{
    // BANKING PLATFORM

    int choice = 0;
    float balance = 0.0f;

    printf("**** Welcome to Banking Platform ****\n");

    do
    {
        printf("\nSelect an Option: \n");
        printf("\n1. Check Balance\n");
        printf("\n2. Deposit Money\n");
        printf("\n3. Withdraw Money\n");
        printf("\n4. Exit Platform\n");

        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("\nThank you for using our Banking Platform!\n");
            break;

        default:
            printf("\nInvalid Choice! Please select 1 - 4\n");
            break;
        }

    } while (choice != 4);

    return 0;
}

void checkBalance(float balance)
{
    printf("\nYou current balance is: $%.2f\n", balance);
}
float deposit()
{
    float amount = 0.0f;

    printf("\nEnter amount you want to deposit: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else
    {
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }
}
float withdraw(float balance)
{
    float amount = 0.0f;

    printf("\nEnter amount you want to withdraw: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if (amount > balance)
    {
        printf("Insufficient funds! Your balance is $%.2f\n", balance);
        return balance;
    }
    else
    {
        printf("Successfully withdrew $%.2f\n", amount);
        return amount;
    }
}