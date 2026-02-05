#include <stdio.h>

int main()
{
    int month_save;

    printf("Monthly Savings Calculation\n----------------------------------\n");
    printf("Enter the number of months: ");
    scanf("%d", &month_save);

    //luckily we dont need float since all values in this equation will be whole
    int total = month_save * (month_save + 1) / 2;


    printf("\nFormula used:\nTotal = n * ((n+1) / 2)\n\n");
    printf("Total Savings after %d months is %d\n\n ", month_save, total);

    return 0; 

}