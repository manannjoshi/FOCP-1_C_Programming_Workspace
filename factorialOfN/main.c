#include <stdio.h>

int main(){
    int n;
    int i=1;
    scanf("%d",&n);
    if(n==0){
        printf("1");
    }
    else{
        while(i<=n){
            n=n*(n-1);
            i++;
        }
        printf("%d",n);
    }
}