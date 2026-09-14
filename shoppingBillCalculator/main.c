#include <stdio.h>

int main(){

    double price;
    int quantity;
    int discount;

    printf("Enter the price of your item\n>> ");
    scanf("%lf",&price);
    printf("Enter the quantity of your item\n>> ");
    scanf("%d",&quantity);

    double total = price*quantity;
    double finalTotal;

    if(total>=1000){
        discount = 10;
        finalTotal = total - (10*total)/100;
    }
    
    else{
        discount = 0;
        finalTotal = total;
    }


    printf("Total amount : %0.2lf\nDiscount : %d%%\nFinal Amount : %0.2lf",total,discount,finalTotal);

    return 0;
}