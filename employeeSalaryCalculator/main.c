#include <stdio.h>

int main(){

    double salary;
    double HRA;
    double DA;
    double GS;

    printf("Enter your salary\n>> ");
    scanf("%lf",&salary);

    HRA = (20*salary)/100;
    DA = (10*salary)/100;
    GS = salary + HRA + DA;

    printf("Basic salary : %0.2lf\nHRA : %0.2lf\nDA : %0.2lf\nGross Salary : %0.2lf",salary,HRA,DA,GS);

    return 0;
}