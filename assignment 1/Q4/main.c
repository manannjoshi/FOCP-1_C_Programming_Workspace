#include <stdio.h>

int main(void) {
    char c;
    int n;

    printf("Enter a char: ");
    scanf("%c", &c);

    /* Flush the newline left in the buffer, else the next scanf is skipped */
    while (getchar() != '\n')
        ;

    printf("Enter an int: ");
    scanf("%d", &n);

    printf("char: %c, int: %d\n", c, n);

    return 0;
}