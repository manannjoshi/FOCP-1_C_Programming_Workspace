#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks out of 100\n>> ");
    scanf("%d",&marks);

    if(marks>=90){
        printf("GRADE A");
    }
    else if(marks>=75){
        printf("GRADE B");
    }
    else if(marks>=50){
        printf("GRADE C");
    }
    else{
        printf("GRADE D");
    }
}