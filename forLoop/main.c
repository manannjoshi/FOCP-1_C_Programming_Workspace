#include <stdio.h>

int main(){

    int n = 10;
    int i;
    int sum=0;

    for(i=1;i<=n;i++){
        sum = sum + i;
    }

    printf("\n%d",sum);

    return 0;
}