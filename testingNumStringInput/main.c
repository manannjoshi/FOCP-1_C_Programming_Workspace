#include <stdio.h>

int checkForValidNum(int age);

int main(){

    int age;
    printf(">> ");
    age = checkForValidNum();
    printf("Your entered age is : %d",age);
    return 0;
}

int checkForValidNum(int age){
    while(scanf("%d",&age) != 1){
        int c;
        while((c=getchar()) != '\n' && c!= EOF);

        printf("Invalid Input, try again\n>> ");
    }
}