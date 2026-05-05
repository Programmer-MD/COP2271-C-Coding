#include <stdio.h>
#include <stdlib.h>
// 10. 3x3 Matrix Operations

int main()
{
    int sum = 0;
    int sum_d1 = 0;
    int sum_d2 = 0;
    int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];  
        }
    }
    printf("The sum of the matrix is: %d\n", sum);
    for (int i = 0; i < 3; i++)
    {
        sum_d1 += matrix[i][i];
        
    }
    printf("The sum of the first diagonal is: %d\n", sum_d1);

    for (int i = 0; i < 3; i++)
    {
        sum_d2 += matrix[i][2 - i];  
        
    }
    printf("The sum of the second diagonal is: %d\n", sum_d2);
    return 0;
}

