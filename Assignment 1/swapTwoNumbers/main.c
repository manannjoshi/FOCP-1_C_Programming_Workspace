#include <stdio.h>

int main(){

    int a, b, temp;

    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("before swap: %d %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("after swap: %d %d\n", a, b);

    return 0;
}