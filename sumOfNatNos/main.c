#include <stdio.h>

int main(){
    int n;
    int i=1;
    int sum=0;
    scanf("%d",&n);

    while(i<=n){
        printf("\n%d",i);
        sum = sum+i;
        i++;
    }

    printf("\n%d",sum);
}