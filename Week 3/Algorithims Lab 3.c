#include <stdio.h>

int main()
{
    //Scenario 3 Tax Calculation

    float yearly_income;
    
    printf("Please enter your yearly income: " );
    scanf(" %f",&yearly_income);
    

    if (yearly_income < 0)
    {

        printf("Invalid income amound");

    }
    else if (yearly_income <= 40000)
    {
        float tax10 =  yearly_income * 0.10;
        float total =  yearly_income + tax10;

        printf("Yearly Income: %.2f     \n", yearly_income);
        printf("Taxes        : %.2f:    \n", tax10);
        printf("------------------------\n");
        printf("Total        : %.2f     \n", total);

    }
    else
    {

         float tax20 =  yearly_income * 0.20;
         float total = yearly_income + tax20;
   
        printf("Yearly Income: %.2f     \n" ,yearly_income);
        printf("Taxes        : %.2f     \n" ,tax20);
        printf("------------------------\n");
        printf("Total        : %.2f     \n" ,total);

    }

    return 0;
}