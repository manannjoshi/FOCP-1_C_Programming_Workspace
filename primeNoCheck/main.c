#include <stdio.h>

int main(){
    int num;
    int isPrime=1;
    scanf("%d",&num);

    if(num==1){
        printf("not prime");
    }
    else{
        for(int i=2;i<=num;i++){
            if(num%i==0 && (num!=i)){
                isPrime=0;
                break;
            }
        }

        if(isPrime==0){
            printf("not prime");
        }
        else{
            printf("prime");
        }
        
    }
}