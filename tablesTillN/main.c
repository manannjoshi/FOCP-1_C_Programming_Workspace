#include <stdio.h>

int main(){
    int N;
    printf("Enter the number which u which u want the code to run for\n>> ");
    scanf("%d",&N);
    for(int j=1;j<=N;j++){
        printf("TABLE OF %d\n\n",j);
        for(int i=1;i<=10;i++){
            printf("%d x %d = %d\n",j,i,j*i);
        }
        printf("\n");
    }
}