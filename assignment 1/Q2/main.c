#include <stdio.h>

int main(void) {
    float f;

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Default: %f\n", f);
    printf("2 decimals: %.2f\n", f);
    printf("Right-aligned in 10 with 2 decimals: %10.2f\n", f);

    return 0;
}