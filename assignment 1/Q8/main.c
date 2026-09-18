#include <stdio.h>

int main(void) {
    long big = 123456789L;
    double d = 3.14;

    /* Bug 1: %%d is for int. long needs %%ld.
       Bug 2: %%d on a double prints garbage. double needs %%f. */
    printf("%ld\n", big);
    printf("%.2f\n", d);

    return 0;
}