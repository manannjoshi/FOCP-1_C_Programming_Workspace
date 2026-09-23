#include <stdio.h>

int main(){

    int a, b;

    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int q = a / b;
    int r = a % b;

    printf("quotient = %d\n", q);
    printf("remainder = %d\n", r);

    return 0;
}