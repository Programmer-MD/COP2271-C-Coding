#include <stdio.h>

//Forgot bool studio include for actual bool True and False
/* 

comment

*/
int main()
{
    int balance = 0;
    int loop = 1;
    while (loop)
    {
        //Dynamic Menu Options w/ Loop
        int choice;
        printf("Please select a service\n\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        scanf("%d", &choice);

        //Depositing Money Option
        if (choice == 1)
        {  
            int deposit_AM;

            printf("How much would you like to deposit: $");
            scanf("%d", &deposit_AM);
            if (deposit_AM > 0)
            {
                balance += deposit_AM;
                printf("You have deposited $%d\nCheck balance for total amount\n\n", deposit_AM);
            }
            else
            {
                printf("Error No negatives or characters!\n");
            }

        }
        //Withdrawing Money Option
        else if (choice == 2)
        {
            if (balance <= 0)
            {
                printf("Please enter money in your account to use this service\n");
            }
            else
            {
                int withdraw_AM;

                printf("Enter withdraw amount: $");
                scanf("%d", &withdraw_AM);
                if (withdraw_AM > 0)
                {
                    balance -= withdraw_AM;
                    printf("You have withdrawn $%d\nCheck balance for total amount\n\n", withdraw_AM);
                }
                else
                {
                    printf("Error No negatives or characters!");
                }
            }
        //Checking Balance    
        }
        else if (choice == 3)
        {
            printf("Here is your current Balance: $%d\n", balance);
        }
        //Exit and Finish Usage
        else if (choice == 4)
        {
            printf("Have a Nice Day! :)");
            int false = loop - 1;
            return 0;
        }
        //Error Handling guiding user back to loop
        else
        {
            printf("Invalid Option\n\n");
        }
    }
    return 0;
}