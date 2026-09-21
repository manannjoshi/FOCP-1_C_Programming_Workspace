#include <stdio.h>

int checkForValidNum();

int main(){

    int num1, num2;

    printf("Enter first number\n>> ");
    num1 = checkForValidNum();

    printf("Enter second number\n>> ");
    num2 = checkForValidNum();

    if(num1>num2){
        printf("%d is greater",num1);
    }
    else if(num2>num1){
        printf("%d is greater",num2);
    }
    else{
        printf("Equal numbers");
    }

    return 0;

}

int checkForValidNum(){
    int num;
    while(scanf("%d",&num) != 1){
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        printf("Invalid input, Try again\nEnter your number\n>> ");
    }
    return num;
}