#include <stdio.h>

int main(){

    double SI;
    double P;
    double R;
    double T;

    printf("Enter principal amount\n>> ");
    scanf("%lf",&P);
    printf("Enter rate of interest\n>> ");
    scanf("%lf",&R);
    printf("Enter time period (in yrs)\n>> ");
    scanf("%lf",&T);

    SI = (P*R*T)/100;

    printf("Simple Interest -> %0.2lf",SI);

    return 0;
}