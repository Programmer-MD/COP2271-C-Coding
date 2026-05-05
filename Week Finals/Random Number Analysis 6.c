#include <stdio.h>
#include <stdlib.h>
// 6. Random Number Analysis

int main()
{
    srand(time(NULL));
    //put in for loop
    int ctr_50 = 0;
    int ctr_even = 0;
    int ctr_odd = 0;

    for (int i = 0; i < 20; i++)
    {
        int randnum = (rand() % 100) + 1;
        printf("Random number %d: %d\n", i + 1, randnum);
        if (randnum > 50)
            ctr_50++;
        int even_check =  randnum % 2;
        if (even_check ==  0)
            ctr_even++;
        else
            ctr_odd++;

    }
    printf("Amount of numbers over 50: %d\n", ctr_50);
    printf("Amount of numbers that are even: %d\n", ctr_odd);
    printf("Amount of numbers that are odd: %d\n", ctr_even);
}
