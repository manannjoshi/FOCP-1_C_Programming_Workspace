#include <stdio.h>
void swap(int *xp, int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(){

    int x = 10;
    int y = 35;
    int *xp = &x;
    int *yp = &y;

    printf("Before swap\nx = %d\ny = %d\n",x,y);
    swap(&x,&y);
    printf("After swap\nx = %d\ny = %d\n",x,y);

    return 0;
}