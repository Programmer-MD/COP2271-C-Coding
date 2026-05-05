#include <stdio.h>
#include <stdlib.h>
/*
// 1. Student Grade Calculator

int main()
{
    int total_score = 0;
    int score = 0;
    int ctr = 0;
    for(int i = 0; i < 3; i++)
    {
        printf("Please enter your exam grade (up to 3)\n");
        scanf("%d", &score);
        if (score < 0 || score > 100) 
        {
            i--;
            printf("Invalid score. Please enter a score between 0 and 100.\n");
            continue;
        }
        total_score += score;
        ctr++;
    }

    int ave = total_score/ctr;
    if (ave <= 100 && ave >= 90)
        printf("Your average is: %d\nGrade: A\n", ave);
    else if (ave <= 89 && ave >= 80)
        printf("Your average is: %d\nGrade: B\n",ave);
    else if (ave <= 79 && ave >= 70)
        printf("Your average is: %d\nGrade: C\n",ave);
    else if (ave <= 69 && ave >= 60)
        printf("Your average is: %d\nGrade: D\n",ave);
    else if (ave < 59)
        printf("Your average is: %d\nGrade: F\n",ave);
    else
        printf("Invalid average score.\n");
        
    return 0;
}

// 2. Swap Demonstration

void swap_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap by value: a = %d, b = %d\n(FUNCTION view, can only swap with pointers)\n", a, b);
    
}
void swap_by_pointer(int *a, int *b)
{
    int temp;
    temp =  *a;
   *a = *b;
   *b = temp;


}

int main()
{
    int a = 1, b = 2;
    int ch = 0;

    printf("What way do you want to swap?\n1. By value\n2. By Pointer\n");
    scanf("%d", &ch);
    if (ch ==1)
    {
        printf("Before swap by value: a = %d, b = %d\n", a, b);
        swap_by_value(a, b);
        printf("After swap by value: a = %d, b = %d\n(In main variables are unchanged only its copies are", a, b);
    }
    else  if (ch ==2)
    {
        printf("Before swap by pointer: a = %d, b = %d\n", a, b);
        swap_by_pointer(&a, &b);
        printf("After swap by pointer: a = %d, b = %d\n", a, b);
    }
    else
    printf("Error");

    return 0;
}

// 3. Number Classification

int main()
{
    int num;
    printf("Please enter a number:  ");
    scanf("%d", &num);
    if (num < 0)
        printf("\nThe number %d is Negative", num );
    else if (num == 0)
        printf("\nThe number is 0");
    else if (num > 0)
        printf("\nThe number %d is Positive", num);
    else
        printf("Please enter a integer value");

    int even_check =  num % 2;
    if (even_check ==  0)
        printf("\nand...Even\n", num);
    else
        printf("\nand...Odd\n", num);


    return 0;
}


// 4. Menu-Driven Calculator

void add()
{
    int a, b;
    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The sum is %d\n",a + b);

}
void subtract()
{
    int a, b;
    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The difference is %d\n",a - b);
}
void multiply()
{
    int a, b;
    printf("Please enter your first number:\n");
    scanf("%d", &a);
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The product is %d\n",a * b);
}
void divide()
{
    int a, b;
    int x = 1;
    printf("This in specifically integer division\n");
    while(x == 1)
    {
        
        printf("Please enter your first number:\n");
        scanf("%d", &a);
        if (a == 0)
            printf("Dividing by 0 can cause errors, Pick a different number:\n");
        else
            x = 2;
    }
    printf("Please enter your second number:\n");
    scanf("%d", &b);
    printf("The quotient is %d\n",a / b);
}

int main()
{
    while(1)
    {
        int ch;
       
        printf("----Calculator----\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        scanf("%d", &ch);
        if (ch == 1)
            add();
        else if (ch == 2)
            subtract();
        else if (ch == 3)
            multiply();
        else if (ch == 4)
            divide();
        else if (ch == 5)
        {
            printf("have a good day\n");
            break;
        }
        else
            printf("Please enter a valid choice\n");

    }
    return 0;
}

// 5. Array statistics

void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int ch;
    
    do{
        
        printf("Enter 1 to print all elements\nEnter 2 to sum\nEnter 3 to average\nEnter 4 to find the min\nEnter 5 to find the max\nEnter 6 for quit\n");
        scanf("%d",&ch);
        
        if (ch == 1)
        {
            for(int i = 0; i < 10; i++)
            {
                printf("%d ", a[i]);
            }
        }
        else if (ch == 2)
        {
            int sum = 0;
            for(int i = 0; i < 10; i++)
            {
                sum += a[i];
            }
            printf("The sum is %d\n", sum);
        }
        else if (ch == 3)
        {
            int sum = 0;
            for(int i = 0; i < 10; i++)
            {
                sum += a[i];
            }
            printf("The average is %d\n", sum / 10);
        }
        else if (ch == 4)
        {
            int min = a[0];
            for(int i = 1; i < 10; i++)
            {
                if (a[i] < min)
                    min = a[i];
            }
            printf("The minimum is %d\n", min);
        }
        else if (ch == 5)
        {
            int max = a[0];
            for(int i = 1; i < 10; i++)
            {
                if (a[i] > max)
                    max = a[i];
            }
            printf("The maximum is %d\n", max);
        }
        else if (ch == 6)
        {
            printf("Goodbye\n");
        }
        else
        {
            printf("Please enter a valid choice\n");
        }
    } while (ch != 6);
    return 0;
}

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

*/

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










