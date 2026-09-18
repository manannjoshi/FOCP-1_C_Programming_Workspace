#include <stdio.h>

int main(void) {
    char name[50];

    /* %[^\n] reads everything up to the newline, spaces included.
       The 49 limits to 49 chars to stay inside the array.
       Plain %%s would stop at the first space. */
    printf("Enter full name: ");
    scanf("%49[^\n]", name);

    printf("Hello, %s!\n", name);

    return 0;
}