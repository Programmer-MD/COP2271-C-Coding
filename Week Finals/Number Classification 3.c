#include <stdio.h>
#include <stdlib.h>
// 3. Number Classification

int main()
{
    int num;
    printf("Please enter a number:  ");
    scanf("%d", &num);
    if (num < 0)
        printf("\nThe number %d is Negative", num );
    else if (num == 0)
        printf("\nThe number is 0");
    else if (num > 0)
        printf("\nThe number %d is Positive", num);
    else
        printf("Please enter a integer value");

    int even_check =  num % 2;
    if (even_check ==  0)
        printf("\nand...Even\n", num);
    else
        printf("\nand...Odd\n", num);


    return 0;
}

