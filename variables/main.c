#include <stdio.h>
#include <stdbool.h>

bool checkIfPass(char grade);

int main(){

    char name[] = "Manan";
    int age = 18;
    float gpa = 2.5;
    char grade = 'F';
    bool Pass;

    printf("Your name is %s\n",name);
    printf("You are %d years old\n",age);
    printf("You have a GPA of %f\n",gpa);
    printf("Your grade is %c\n",grade);
    checkIfPass(grade);

    return 0;
}

bool checkIfPass(char grade){
    if(grade=='F'){
        printf("Result - FAIL");
    }
    else{
        printf("Result - PASS");
    }
}