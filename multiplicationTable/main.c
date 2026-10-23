#include <stdio.h>

int main(){

    int n;
    int i=1;
    scanf("%ld",&n);

    while(i<=10){
        printf("\n%ld x %d = %ld",n,i,n*i);
        i++;
    }

    return 0;
}