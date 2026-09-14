#include <stdio.h>

int main(){
    double sub1;
    double sub2;
    double sub3;
    char result;
    double avgMarks;
    double totalMarks;

    printf("Enter marks of Subject 1\n>> ");
    scanf("%lf",&sub1);

    printf("Enter marks of Subject 2\n>> ");
    scanf("%lf",&sub2);

    printf("Enter marks of Subject 3\n>> ");
    scanf("%lf",&sub3);

    avgMarks = (sub1+sub2+sub3)/3;
    totalMarks = sub1+sub2+sub3;

    if(avgMarks>=40.0){
        printf("Result : PASS\nTotal Marks : %0.2lf/300\nAverage Marks : %0.2lf",totalMarks,avgMarks);
    }

    else if(avgMarks<40.0){
         printf("Result : FAIL\nTotal Marks : %0.2lf\nAverage Marks : %0.2lf",totalMarks,avgMarks);
    }

    else{
        printf("Error");
    }

    return 0;
}