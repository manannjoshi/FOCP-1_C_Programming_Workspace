#include <stdio.h>

int main(){

    int age;
    float height;
    char grade;

    printf("enter your age: ");
    scanf("%d", &age);
    printf("enter height in meters: ");
    scanf("%f", &height);
    printf("enter grade: ");
    scanf(" %c", &grade);

    printf("age = %d\n", age);
    printf("height = %.2f meters\n", height);
    printf("grade = %c\n", grade);

    scanf("PRESS ENTER TO EXIT");

    return 0;
}