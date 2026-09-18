#include <stdio.h>

int main(void) {
    int m1, m2, m3;

    printf("Enter marks for 3 subjects (out of 100): ");
    scanf("%d %d %d", &m1, &m2, &m3);

    int total = m1 + m2 + m3;
    /* / 3.0f not / 3, else integer division truncates the percentage */
    float percentage = total / 3.0f;

    printf("Marks: %d, %d, %d\n", m1, m2, m3);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}