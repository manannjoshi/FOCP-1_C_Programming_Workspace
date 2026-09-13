#include <stdio.h>

int main(){

    float basic, allow, bonus;

    printf("enter basic salary: ");
    scanf("%f", &basic);
    printf("enter allowance: ");
    scanf("%f", &allow);
    printf("enter bonus: ");
    scanf("%f", &bonus);

    float total = basic + allow + bonus;

    printf("final salary = %.2f\n", total);

    scanf("PRESS ENTER TO EXIT");

    return 0;
}