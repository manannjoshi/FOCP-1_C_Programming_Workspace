#include <stdio.h>

int main(void) {
    int n;
    int result;

    do {
        printf("Enter an integer: ");
        result = scanf("%d", &n);
        if (result != 1) {
            /* Clear the bad input out of the buffer before retrying */
            while (getchar() != '\n')
                ;
        }
    } while (result != 1);

    printf("Got it: %d\n", n);

    return 0;
}