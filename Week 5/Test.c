#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    srand(time(NULL)); 
    int num = 0;
    for (int i = 0; i < 51; i++)
    {
        
        sleep(3);
        printf("%d \n", num);
        num++;
        
        int random = rand() % 30;
        printf("%5d\n", random);




       
    }





    return 0;
}