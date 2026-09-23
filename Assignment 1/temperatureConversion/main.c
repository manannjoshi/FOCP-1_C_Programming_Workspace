#include <stdio.h>

int main(){

    float c;

    printf("enter temp in celsius: ");
    scanf("%f", &c);

    float f = (c * 9 / 5) + 32;

    printf("%.2f degF\n", f);

    return 0;
}