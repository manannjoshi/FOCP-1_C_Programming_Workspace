#include <stdio.h>
 
int main(){

    int unit;
    int rate;

    printf("Enter your number\n>> ");
    scanf("%d",&unit);

    if(unit>=0 && unit<=100){
        rate = unit*2;
        printf("%d",rate);
    }
    else if(unit>=101 && unit<=200){
        rate = unit*3;
        printf("%d",rate);
    }
    else{
        rate = unit*5;
        printf("%d",rate);
    }

    return 0;
}