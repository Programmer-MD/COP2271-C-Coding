#include<stdio.h>
#include<stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int sum_e = 0;
    int user_choice = 0;

    printf("enter a stopping loop number: ");
    scanf("%d", &user_choice);

    while (i <= user_choice)
    {
        int even = i % 2;
        if (even == 0)
        {
            
            printf("%d", i);
            sum_e += i;
        }

        sum += i;
        printf("\n  %3d ", i);
        i++;

        if( sum > 20)
        {
            break;
        }
        
    }
    printf("\nsum = %d", sum);
    printf("\nThe even sum = %d", sum_e);
    return 0;




}