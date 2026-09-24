#include <stdio.h>

int checkForValidInt();
 
int main() {

    int n;
    printf("Enter your number\n>> ");
    n = checkForValidInt();

    if(n%2==0 && n%5==0){
        printf("Special");
    }
    else if(n%2==0){
        printf("Even");
    }
    else if(n%5==0){
        printf("Five");
    }
    else{
        printf("Odd/Other");
    }

    return 0;
}

int checkForValidInt(){
    int num;
    while(scanf("%d",&num) != 1){
        int c;
        while((c=getchar() != '\n' && c != EOF));
        printf("Invalid input, try again\n>> ");
    }
    return num;
}
