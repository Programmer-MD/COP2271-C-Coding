#include<stdio.h>
#include<stdlib.h>

void analyzeNumber(int n, int *is_prime, int *digit_count)
{
    int count = 0, t = 0;
    for(int i = 2; i < n-1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        *is_prime = 1;
    }
    else
    {
        *is_prime = 0;
    }
    while (n > 0)
    {
        n /= 10;
        t++;
    }
    *digit_count = t;

}

int main()
{
    int num, prime = 0, nd = 0;
    int *ptr_prime = &prime;
    int *ptr_nd = &nd;

    printf("Enter a number: ");
    scanf("%d", &num);

    analyzeNumber(num, ptr_prime, ptr_nd);
    if(prime == 0)
    {
        printf("Not prime\n");
    }
    else
    {
        printf("Is prime\n");
    }
    printf("Number of digits: %d\n", nd);


    return 0;
}