#include <stdio.h>

int main(void) {
    int i;
    float f;
    char c;

    /* The space before %%c skips any whitespace, so the char is not the leftover newline */
    printf("Enter an int, a float, and a char: ");
    scanf("%d %f %c", &i, &f, &c);

    printf("int: %d\n", i);
    printf("float: %.2f\n", f);
    printf("char: %c\n", c);

    return 0;
}