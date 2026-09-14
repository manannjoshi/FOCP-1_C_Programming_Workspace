#include <stdio.h>

int main(){

    char name[10];
    int age;
    float height;
    char grade;

    printf("Enter student details\n\n");
    printf("Enter your student name\n>> ");
    scanf("%s",&name);

    printf("Enter your age\n>> ");
    scanf("%d",&age);

    printf("Enter your height\n>> ");
    scanf("%f",&height);

    printf("Enter your grade [A-F]\n>> ");
    scanf(" %c",&grade);
    printf("------Student Profile------\n");
    printf("Student Name : %s\nAge : %d\nHeight : %0.1f\nGrade : %c\n",name,age,height,grade);
    printf("---------------------------\n");

    return 0;
}