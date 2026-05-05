#include <stdio.h>
#include <stdlib.h>
// 8. Prime Number Checker

int is_prime(int n)
{
    if (n <= 1)
        return 0;
   
    for(int i = 2; i < n; i++)
    {
        
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    is_prime(n);

    if (is_prime(n))
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}
