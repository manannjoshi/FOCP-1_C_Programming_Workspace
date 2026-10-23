#include <stdio.h>

int main(){

    int N;

    printf("Enter the number of stars you want\n>> ");
    scanf("%d",&N);

    while(N>0){
        printf("*");
        N=N-1;
    }

}