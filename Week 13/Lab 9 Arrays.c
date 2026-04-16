#include<stdio.h>
#include<stdlib.h>

/* Program 1
void main()
{
    int a[10];
    printf("Enter 10 integer values: ");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
            
        printf("%dth value = %d\nEnter another value: \n", i + 1, a[i]);
    }
    for (int j=9 ; j>= 0; j--)
    {
        printf("%dth value = %d\n", j + 1, a[j]);
            
    }
} 
*/

// Program 2

void maxmin(int size, int a[size])
{
    int max = 0, min = 1000;

    printf("%d",a[0]);

    for (int i = 0; i < size;i++)
    {
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];
        
        
        
    }
    printf("\nMax value = %d Min value =  %d \n", max,min);
}

void search(int size, int a[size])
{
    int temp, c = 0; 
    
    printf("enter value of the search\n");
    scanf("%d", &temp);
    
    for(int i = 0; i<size; i++)
    {
        if (a[i] == temp)
        {
            c = 1;
        }
    }

    if (c == 0)
    {
        printf("does not exist\n");
    }
    else
    {
        printf("exists\n");
    }
}

void replace(int size, int a[size])
{
    
    int idx,val;
    
    printf("Enter the target index to be replaced (0-14): \n");
    scanf("%d", &idx);
    
    printf("Enter a value: \n");
    scanf("%d", &val);
    
    a[idx] = val; 

}


void main()
{
    int a[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int ch;
    
    do{
        
        printf("Enter 1 for max/min \nEnter 2 for search \nEnter 3 for replace\nEnter 4 for quit\n");
        scanf("%d",&ch);
        
        if (ch == 1)
        {
            maxmin(15,a);
        }
        else if (ch == 2)
        {
            search(15,a);
        }
        else if (ch == 3)
        {
            replace(15,a);
        }
        else if (ch == 4)
        {
            return 0;
            printf("Bye :)\n");
        }
        else
            printf("Invalid entry\n");
        
    } while (ch != 4);
    
}

