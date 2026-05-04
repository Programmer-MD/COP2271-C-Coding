#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_score = 0;
    int score = 0;
    int ctr = 0;
    for(int i; i  >  4; i++)
    {
        printf("Please enter your exam grade (up to 3)\n");
        scanf("%d", &score);
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
        

    return 0;
}