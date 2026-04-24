#include <stdio.h>
#include <stdlib.h>


void deposit(float *balance, float amount, int *transactions)
{
    *balance += amount;
    (*transactions)++;
}

void withdraw(float *balance, float amount, int *transactions, int *failed_attempts)
{
    if (*balance >= amount)
    {
        *balance -= amount;
        (*transactions)++;
    }
    else
    {
        (*failed_attempts)++;
        printf("Overdraft! Failed attempts (Max 3): %d\n", *failed_attempts);
    }

}

void checkStatus(float balance, int transactions, int failed_attempts)
{

    printf("Current balance: %.2f\nTotal transactions: %d\nFailed attempts: %d\n", balance, transactions, failed_attempts);

}

void applyInterest(float *balance, float rate)

{
    *balance += (*balance * rate);
    printf("balance w/ applied interest: %.2f\n",  *balance);

}
// Everything is handled around analyze account function
void analyzeAccount(float *balance, int *transactions, int *failed_attempts)
{
    
     do
    {
       
        int ch;
        if (*balance > 10000)
        {
            printf("VIP Status Achieved\n");
        }
        printf("Menu\n1. Deposit\n2. Withdraw\n3. Check Status\n4. Apply Interest\n5. Exit\n");
        scanf("%d", &ch);
        // Menu
        // Deposit
        if (ch == 1)
        {
            float amount;
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                deposit(balance, amount, transactions);
            }
            else
            printf("invalid amount\n");
        }
        // Withdraw
        else if (ch == 2)
        {
            float amount;
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0)
            {
                withdraw(balance, amount, transactions, failed_attempts);
            }
            else
            printf("invalid amount\n");
        // Check Status
        }
        else if (ch == 3)
        {
            checkStatus(*balance, *transactions, *failed_attempts);
        }
        // Apply Interest w/ VIP Perks
        else if (ch == 4)
        {
            float rate = .05;
            //VIP Perks
            if(*balance > 10000)
            {
                rate = .1;
            }
            applyInterest(balance, rate);
        }
        // Exit
        else if (ch == 5)
        {
            *failed_attempts = 3; 
        }
        // Error Handling
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

    } while (*failed_attempts < 3);

}
// Main w/ initalized variables and pointers 
int main()
{
    float balance = 0;
    int transactions = 0;
    int failed_attempts = 0;
    analyzeAccount(&balance, &transactions, &failed_attempts);
    return 0;
}



