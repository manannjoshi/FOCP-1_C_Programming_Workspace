#include <stdio.h>
#include <math.h>

double checkForValidDouble();

int main() {

    double num1,num2;
    char op;

    printf("Enter first number\n>> ");
    num1 = checkForValidDouble();
    printf("Enter second number\n>> ");
    num2 = checkForValidDouble();

    while(1){
        printf("Enter your operant [+,-,*,/,%%]\n>> ");
        scanf(" %c",&op);

        switch(op){
        case '+':
            double sum = num1+num2;
            printf("The sum of %0.2f and %0.2f is %0.2f",num1,num2,sum);
            break;
        case '-':
            double diff = num1-num2;
            printf("The difference of %0.2f and %0.2f is %0.2f",num1,num2,diff);
            break;
        case '*':
            double prod = num1*num2;
            printf("The product of %0.2f and %0.2f is %0.2f",num1,num2,prod);
            break;
        case '/':
            if(num2==0){
                printf("Cannot divide by zero");
                break;
            }
            else{
                double quot = num1/num2;
                printf("The quotient of %0.2f and %0.2f is %0.2f",num1,num2,quot);
                break;
            }
        case '%':
            if(num2==0){
                printf("Cannot divide by zero");
                break;
            }
            else{
                double rem = fmod(num1,num2);
                printf("The remainder of %0.2f and %0.2f is %0.2f",num1,num2,rem)   ;
                break;
            }
        default:
            printf("Invalid operator\n");
            continue;
        }
        return 0;
    }
}

double checkForValidDouble(){
    double num;
    while(scanf("%lf",&num) != 1){
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        printf("Invalid input, Try again\nEnter your number\n>> ");
    }
    return num;
}