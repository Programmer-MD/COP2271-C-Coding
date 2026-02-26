#include <stdio.h>

//Forgot bool studio include for actual bool True and False
/* 

comment

*/
int main()
{
    int i = 1;
    
    int loop = 1;

    while (loop)
    {
        //Dynamic Menu Options w/ Loop
    
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
            int i = 1;
            int table_value = 1;

            printf("X%5n\n%d|\n%d|\n%d|\n%d|\n%d|\n%d|\n%d|\n%d|\n%d|\n%d|\n", i, i*2, i*3, i*4, i*5, i*6, i*7, i*8, i*9, i*10);



            printf("Enter a postive integer to expand the multiplcation table: ");
            scanf("%d", &n);






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