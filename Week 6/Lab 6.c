#include <stdio.h>


int main()
{
    int loop = 1;

    while (loop)
    {
        // Dynamic Menu Options w/ Loop
        // Things get messy quick so refer to other comments
        // Choices 1-3 all have procautions for entering a negative number
        // Choices 1 and 2 are done with while loops while 3 took a lot longer cause my lack of experience with for loops
        int choice;
        printf("Please select a service\n\n");
        printf("1. Sum from 1 to n\n2. Product from 1 to n\n3. Multiplication table\n4. Exit\n");
        scanf("%d", &choice);

        // Computing a sum up to n
        if (choice == 1)
        {  
            int n;
            int i = 1;
            int sum = 0;

            printf("Enter the number you want to sum up to: ");
            scanf("%d", &n);
            if (n > 0)
            {
                while (i <= n)
                {
                    
                    sum += i;
                    i++;
                }
                printf("The sum up to %d is %d\n", n, sum);
            }
            else
            {
                printf("Invalid Input");
            }
        }
        // Computing a product up to n
        else if (choice == 2)
        {
            int n;
            int i = 1;
            int product = 1;

            printf("Enter the number you want to multiply up to: ");
            scanf("%d", &n);
            if (n > 0)
            {
                while (i <= n)
                {
                    
                    product *= i; 
                    i++;
                
                }
                printf("The product up to %d is %d\n", n, product);
            }
            else
            {

                printf("Invalid Input");
            }
        }
        // Multiplication table up to 10 + n   
        else if (choice == 3)
        {
            int n;

            printf("Enter a positive integer to expand the multiplication table: ");
            scanf("%d", &n);
            // could be done easier with better print statements?
            // While loops version possible but could not solve it
            if (n > 0)
            {
                // rows
                for (int i = 1; i <= n; i++) 
                {
                    // columns
                    for (int j = 1; j <= 10; j++)
                    {
                        printf("%d x %d = %d\t", i, j, i * j);
                    }
                    printf("\n"); // move to next row
                }
            }
            else
            {
            printf("Invalid Input\n");
            }

        }
      
        // Exit and Finish Usage
        else if (choice == 4)
        {
            int exit;
            printf("\nPress 1 to confirm or 0 to go back: ");
            scanf("%d", &exit);
            if (exit ==1 )
            {
                printf("\nHave a nice day");
                return 0;
            }
            else
            {
                printf("\nReturning to menu\n");
            }

        }
        // Error Handling guiding user back to loop
        else
        {
            printf("Invalid Option\n\n");
        }
    }
    return 0;
}