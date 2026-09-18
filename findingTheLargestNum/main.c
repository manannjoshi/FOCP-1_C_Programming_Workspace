#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    bool checkForValidNum(int a);

    int a;
    int b;

    while(1){
        printf("Enter first number\n>> ");
        if(checkForValidNum(a)==true){
        }
        else{
            printf("Invalid Input");
        }

        printf("Enter second number\n>> ");
        scanf("%d",&b);

        if(a>b){
            printf("a is greater");
            break;
        }

        else if(a<b){
            printf("b is greater");
            break;
        }

        else if(a==b){
            printf("Equal");
            break;
        }

        else{
            printf("Error");
            break;
        }
    }

    return 0;
}

bool checkForValidNum(int a){
    scanf("%d",&a);
    if(isdigit(a)==false){
        return false;
    }
    else{
        return true;
    }
}