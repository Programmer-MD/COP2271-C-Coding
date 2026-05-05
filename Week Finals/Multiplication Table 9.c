#include <stdio.h>
#include <stdlib.h>
// 9. Multiplication Table

int main()
{
    int n = 0;
    printf("Enter a positive integer to see it multiplied 1-10: ");
    scanf("%d", &n);

    for(int i = 1; i <11 ; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
