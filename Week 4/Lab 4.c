#include <stdio.h>

int main()
{
  
    int loop = 1;
    while (loop)
    {
        int choice;
        printf("Please select a service\n\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Option Deposit Chosen");
            int false = loop - 1;
            return 0;
        }
        else if (choice == 2)
        {
            printf("Option Withdraw Chosen");
            int false = loop - 1;
            return 0;
        }
        else if (choice == 3)
        {
            printf("Option Check Balance Chosen");
            int false = loop - 1;
            return 0;
        }
        else if (choice == 4)
        {
            printf("Option Exit Chosen\nHave a Nice Day! :) ");
            int false = loop - 1;
            return 0;
        }
        else
        {
            printf("Invalid Option\n\n");
        
        }

    }

    return 0;
}