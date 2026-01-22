#include<stdio.h>
#include<math.h>

int main(){
    char rating;
    int student_id;
    int age;
    float avg;
    int grade_1;
    int grade_2;
    int grade_3;
    int sum;

    printf("Please enter your student rating:");
    scanf(" %c", &rating);
    printf("Please enter your student ID:");
    scanf(" %d", &student_id);
    printf("Please enter your age:");
    scanf(" %d", &age);
    printf("Please enter your 1st grade:");
    scanf(" %d", &grade_1);
    printf("Please enter your 2nd grade:");
    scanf(" %d", &grade_2);
    printf("Please enter your 3nd grade:");
    scanf(" %d", &grade_3);

    sum = grade_1 + grade_2 + grade_3;
    avg = (float) sum/3;

    printf("\n********Student Summary*******\n\n"); 
    printf("Student Rating: %c\n", rating);
    printf("Student ID    : %d\n", student_id);
    printf("Age           : %d\n", age);       
    printf("Average Grade : %.2f \n", avg);

    printf("\nAge Formatting:\n");
    printf("Normal    : %d\n", age);
    printf("Width 5   : %5d\n", age);
    printf("Zero-pad  : %05d\n", age);

    return 0;
}