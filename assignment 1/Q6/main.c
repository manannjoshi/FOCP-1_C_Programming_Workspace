#include <stdio.h>

int main(void) {
    int first, rest;

    printf("Enter a 5-digit roll number: ");
    scanf("%2d", &first); /* only the first 2 digits */
    scanf("%d", &rest);   /* whatever is left */

    printf("First 2 digits: %02d\n", first);
    printf("Remaining: %d\n", rest);

    return 0;
}