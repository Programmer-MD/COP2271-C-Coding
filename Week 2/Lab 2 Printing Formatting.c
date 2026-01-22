#include<stdio.h>

int main(){
    char rating;
    int student_id;
    int age;
    float grade_ave;
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
    grade_ave = (float) sum/3;


    printf("\n********Student Summary*******\n\n"); 
    printf("Student Rating: %c\n", rating);
    printf("Student ID: %d\n", student_id);
    printf("Age: %d\n", age);       
    printf("Average Grade %2f \n", grade_ave);

    return 0;
}