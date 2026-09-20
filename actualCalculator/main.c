#include <stdio.h>

int main(){

    double checkForValidDouble();
    char checkForValidOp();

    double num1;
    double num2;
    char op;

    while(1){
        printf("=======================\n");
        printf("Enter first number\n>> ");
        num1 = checkForValidDouble();

        printf("=======================\n");
        printf("Enter second number\n>> ");
        num2 = checkForValidDouble();

        while(1){
            printf("Which operation would you like to use [+,-,*,/]\n>> ");
            scanf(" %c",&op);

            if(op=='+'){
                double result = num1+num2;
                printf("First number : %0.2lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf\n",num1,num2,result,num1,op,num2,result);
                break;
            }

            else if(op=='-'){
                double result = num1-num2;
                printf("First number : %0.2lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf\n",num1,num2,result,num1,op,num2,result);
                break;
            }

            else if(op=='*'){
                double result = num1*num2;
                printf("First number : %lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf\n",num1,num2,result,num1,op,num2,result);
                break;
            }

            else if(op=='/'){
                double result = num1/num2;
                printf("First number : %lf\nSecond Number : %0.2lf\nResult : %0.2lf\n%0.2lf %c %0.2lf = %0.2lf\n",num1,num2,result,num1,op,num2,result);
                break;
            }
            else{
                printf("=======================\n");
                printf("Invalid Operator, try again\n>> ");
            }
        }
    }



    return 0;
}

double checkForValidDouble(){
    double num;
    while(scanf("%lf",&num) != 1){
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        printf("=======================\n");
        printf("Invalid input, Try again\nEnter your number\n>> ");
    }
    return num;
}

char checkForValidOp(){
    char op;
    while(1){
        if(op=='+'){
            return op;
        }
    }
}