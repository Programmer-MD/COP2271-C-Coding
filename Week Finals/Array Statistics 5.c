#include <stdio.h>
#include <stdlib.h>
// 5. Array statistics

void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int ch;
    
    do{
        
        printf("Enter 1 to print all elements\nEnter 2 to sum\nEnter 3 to average\nEnter 4 to find the min\nEnter 5 to find the max\nEnter 6 for quit\n");
        scanf("%d",&ch);
        
        if (ch == 1)
        {
            for(int i = 0; i < 10; i++)
            {
                printf("%d ", a[i]);
            }
        }
        else if (ch == 2)
        {
            int sum = 0;
            for(int i = 0; i < 10; i++)
            {
                sum += a[i];
            }
            printf("The sum is %d\n", sum);
        }
        else if (ch == 3)
        {
            int sum = 0;
            for(int i = 0; i < 10; i++)
            {
                sum += a[i];
            }
            printf("The average is %d\n", sum / 10);
        }
        else if (ch == 4)
        {
            int min = a[0];
            for(int i = 1; i < 10; i++)
            {
                if (a[i] < min)
                    min = a[i];
            }
            printf("The minimum is %d\n", min);
        }
        else if (ch == 5)
        {
            int max = a[0];
            for(int i = 1; i < 10; i++)
            {
                if (a[i] > max)
                    max = a[i];
            }
            printf("The maximum is %d\n", max);
        }
        else if (ch == 6)
        {
            printf("Goodbye\n");
        }
        else
        {
            printf("Please enter a valid choice\n");
        }
    } while (ch != 6);
    return 0;
}