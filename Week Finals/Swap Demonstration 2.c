#include <stdio.h>
#include <stdlib.h>
// 2. Swap Demonstration

void swap_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    
}
void swap_by_pointer(int *a, int *b)
{
    int temp;
    temp =  *a;
   *a = *b;
   *b = temp;


}

int main()
{
    int a = 1, b = 2;
    int ch = 0;

    printf("What way do you want to swap?\n1. By value\n2. By Pointer\n");
    scanf("%d", &ch);
    if (ch ==1)
    {
        printf("Before swap by value: a = %d, b = %d\n\n", a, b);
        swap_by_value(a, b);
        printf("After swap by value: a = %d, b = %d\n(In main variables are unchanged only its copies are changed)\n", a, b);
    }
    else  if (ch ==2)
    {
        printf("Before swap by pointer: a = %d, b = %d\n\n", a, b);
        swap_by_pointer(&a, &b);
        printf("After swap by pointer: a = %d, b = %d\n", a, b);
    }
    else
    printf("Error");

    return 0;
}