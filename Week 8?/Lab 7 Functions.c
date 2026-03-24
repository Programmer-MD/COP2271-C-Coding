#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void guessNumber(int rNUM);

int main()
{
    srand(time(NULL));

    int randNum = (rand() % 6) + 1; 

    guessNumber(randNum);

    return 0; 
}

void guessNumber(int rNUM)
{
    if(rNUM == 1)
    {
        printf("The random number is %d\n", rNUM);

    }
    else if(rNUM == 2)
    {
        printf("The random number is %d\n", rNUM);
        
    }
    else if(rNUM == 3)
    {

        printf("The random number is %d\n", rNUM);
    }
    else if(rNUM == 4)
    {

        printf("The random number is %d\n", rNUM);
    }
    else if(rNUM == 5)
    {

        printf("The random number is %d\n", rNUM);
    }
    else if(rNUM == 6)
    {

        printf("The random number is %d\n", rNUM);
    }
    else
    {
        printf("ERROR");
    }

}