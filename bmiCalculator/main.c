#include <stdio.h>

int main(){
    double weight;
    double height;

    printf("Enter your weight (in kgs)\n>> ");
    scanf("%lf",&weight);

    printf("Enter your height (in m)\n>> ");
    scanf("%lf",&height);

    double bmi = weight/(height*height);

    printf("\nBMI : %0.2lf\n\nDetails\nWeight : %0.2lf\nHeight : %0.2lf",bmi,weight,height);

    return 0;
}