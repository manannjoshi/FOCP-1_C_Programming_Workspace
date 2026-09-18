#include <stdio.h>

int main(void) {
    /* %5.2f  -> width 5 total, 2 decimals (padded left with spaces)
       %-8d   -> width 8, left-aligned
       %%c     -> single char
       |       -> literal separator */
    printf("%5.2f | %-8d | %c\n", 2.71828, 42, 'A');

    return 0;
}