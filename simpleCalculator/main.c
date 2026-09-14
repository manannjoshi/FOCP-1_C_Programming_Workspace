#include <stdio.h>

int main(){

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
        double sum = num1+num2;
        printf("First number : %0.2lf\nSecond Number : %0.2lf\nSum : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,sum,num1,op,num2,sum);
    }

    else if(op=='-'){
        double sum = num1-num2;
        printf("First number : %0.2lf\nSecond Number : %0.2lf\nSum : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,sum,num1,op,num2,sum);
    }

    else if(op=='*'){
        double sum = num1*num2;
        printf("First number : %lf\nSecond Number : %0.2lf\nSum : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,sum,num1,op,num2,sum);
    }

    else if(op=='/'){
        double sum = num1/num2;
        printf("First number : %lf\nSecond Number : %0.2lf\nSum : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf",num1,num2,sum,num1,op,num2,sum);
    }

    printf("\n===========================\n");

    return 0;
}