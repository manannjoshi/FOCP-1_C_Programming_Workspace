#include <stdio.h>

int main(){

    float c;

    printf("enter temp in celsius: ");
    scanf("%f", &c);

    float f = (c * 9 / 5) + 32;

    printf("%.2f degF\n", f);

    scanf("PRESS ENTER TO EXIT");

    return 0;
}