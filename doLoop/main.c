#include <stdio.h>

int main(){

    /*int n,i=1;
    do{
        printf("%d - C Programming\n",i);
        i++;
    }while(i<=10);*/

    int op = 0;
    do{
        printf("Demo Menu\n1) Buy\n2) Sell\n3) Exit\n>> ");
        scanf("%d",&op);
    }while(op==0);

    return 0;
}