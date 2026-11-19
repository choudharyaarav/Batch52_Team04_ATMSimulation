#include <stdio.h>

int main()
{
    int pin = 1234, entered, choice, i;
    float balance = 5000, amount;

    printf("===== WELCOME TO ATM =====\n");

    for(i = 1; i <= 3; i++)
    {
        printf("Enter your PIN: ");
        if(scanf("%d", &entered) != 1)
        {
            printf("Invalid PIN input\n");
            return 0;
        }

        if(entered == pin)
        {
            printf("PIN correct!\n");
            break;
        }
        else
        {
            printf("Wrong PIN! Attempts left: %d\n", 3-i);
        }
    }

    if(i == 4)
    {
        printf("Card blocked! Too many wrong attempts.\n");
        return 0;
    }

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1)
        {
            printf("Invalid choice\n");
            return 0;
        }

        switch(choice)
        {
            case 1:
                printf("Your balance is Rs %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                if(scanf("%f", &amount) != 1)
                {
                    printf("Invalid amount\n");
                    return 0;
                }

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("Money deposited successfully!\n");
                    printf("New balance: Rs %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                if(scanf("%f", &amount) != 1)
                {
                    printf("Invalid amount\n");
                    return 0;
                }

                if(amount <= 0)
                {
                    printf("Invalid amount\n");
                }
                else if(amount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Please collect your cash\n");
                    printf("Remaining balance: Rs %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using ATM!\n");
                break;

            default:
                printf("Wrong choice! Try again.\n");
        }

    }while(choice != 4);

    return 0;
}