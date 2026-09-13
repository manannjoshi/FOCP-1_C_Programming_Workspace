#include <stdio.h>

int main(){

    int a, b, c;

    printf("enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    float avg = (a + b + c) / 3.0;

    printf("average = %.2f\n", avg);

    scanf("PRESS ENTER TO EXIT");

    return 0;
}