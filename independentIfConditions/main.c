#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks out of 100\n>> ");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90){
        printf("GRADE A");
    }
    if(marks>=75 && marks<90){
        printf("GRADE B");
    }
    if(marks>=50 && marks<75){
        printf("GRADE C");
    }
    if(marks>=0 && marks<50){
        printf("GRADE D");
    }
}