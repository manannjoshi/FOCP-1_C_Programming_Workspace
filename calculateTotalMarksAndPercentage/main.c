#include <stdio.h>

int main(){

    int m1, m2, m3, m4, m5;

    printf("enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    int total = m1 + m2 + m3 + m4 + m5;
    float percent = total / 5.0;

    printf("total = %d\n", total);
    printf("percentage = %.2f\n", percent);

    scanf("PRESS ENTER TO EXIT");

    return 0;
}