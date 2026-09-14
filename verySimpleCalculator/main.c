#include <stdio.h>

int main(){
    double num1;
    double num2;

    printf("Enter first number\n>> ");
    scanf("%lf",&num1);

    printf("Enter second number\n>> ");
    scanf("%lf",&num2);

    printf("Sum : %0.2lf\nDifference : %0.2lf\nProduct : %0.2lf\nQuotient : %0.2lf",num1+num2,num1-num2,num1*num2,num1/num2);

    return 0;
}