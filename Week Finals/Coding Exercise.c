#include <stdio.h>
#include <stdlib.h>
/*
Student Grade Calculator
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
*/