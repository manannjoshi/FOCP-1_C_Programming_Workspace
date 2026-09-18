#include <stdio.h>

int main(){

    double checkForValidDouble(double num);
    char checkForValidOp(double num);

    double num1;
    double num2;
    char op;

    printf("Enter first number\n>> ");
    scanf("%lf",&num1);

    printf("Enter second number\n>> ");
    scanf("%lf",&num2);

    printf("Which operation would you like to use [+,-,*,/]\n>> ");
    scanf(" %c",&op);

    printf("===========================\n");
    if(op=='+'){
        double result = num1+num2;
        printf("First number : %0.2lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,result,num1,op,num2,result);
    }

    else if(op=='-'){
        double result = num1-num2;
        printf("First number : %0.2lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,result,num1,op,num2,result);
    }

    else if(op=='*'){
        double result = num1*num2;
        printf("First number : %lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,result,num1,op,num2,result);
    }

    else if(op=='/'){
        double result = num1/num2;
        printf("First number : %lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,result,num1,op,num2,result);
    }

    printf("\n===========================\n");

    return 0;
}

double checkForValidDouble(double num){

}

char checkForValidOp(double num){

}