#include <stdio.h>
#include <stdlib.h>
// 7. Fibonacci Series
void fib_iterative(int n)
{
    int a = 0, b = 1, next;
    for(int i = 0; i < n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    printf("Iterative result: %d\n", a);

}

int fib_recursive(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main()
{
    int n;
    printf("Please a number to find the nth term in the Fibonacci series:  ");
    scanf("%d", &n);

    fib_iterative(n);

    printf("\nRecursive result: %d\n", fib_recursive(n));
    return 0;
}
