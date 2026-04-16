#include <stdio.h>
#include <stdlib.h>
//bonus point!
//using pointers in arrays!
//pointers are just memory addresses, so we can use them to access array elements as well!
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    //points to the first element FOR ONLY ARRAYS! (not for other variables)
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i)); //using pointer arithmetic to access array elements
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}




