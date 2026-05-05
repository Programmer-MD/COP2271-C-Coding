#include <stdio.h>
#include <stdlib.h>
// 4. Menu-Driven Calculator

void add()
{
    int a, b;
    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The sum is %d\n",a + b);

}
void subtract()
{
    int a, b;
    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The difference is %d\n",a - b);
}
void multiply()
{
    int a, b;
    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The product is %d\n",a * b);
}
void divide()
{
    int a, b;
    int x = 1;
    printf("This in specifically integer division\n");
    while(x == 1)
    {
        
        printf("Please enter your first number:\n");
        scanf("%d", &a);
        if (a == 0)
            printf("Dividing by 0 can cause errors, Pick a different number:\n");
        else
            x = 2;
    }
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The quotient is %d\n",a / b);
}

int main()
{
    while(1)
    {
        int ch;
       
        printf("----Calculator----\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        scanf("%d", &ch);
        if (ch == 1)
            add();
        else if (ch == 2)
            subtract();
        else if (ch == 3)
            multiply();
        else if (ch == 4)
            divide();
        else if (ch == 5)
        {
            printf("have a good day\n");
            break;
        }
        else
            printf("Please enter a valid choice\n");

    }
    return 0;
}