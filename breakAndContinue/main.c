#include <stdio.h>

int main(){

    int count=0;
    int n,i=1,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%7==0){
            printf("\nFound 7's multiple - '%d'",i);
            count++;
            continue;
        }
        printf("\n%d",i);
        sum=sum+i;
    }

    printf("\nSum: %d",sum);
    printf("\nTotal count : %d",count);

    return 0;
}