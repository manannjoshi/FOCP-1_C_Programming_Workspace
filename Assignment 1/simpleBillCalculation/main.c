#include <stdio.h>

int main(){

    float price;
    int qty;

    printf("enter price of the item: ");
    scanf("%f", &price);
    printf("enter quantity: ");
    scanf("%d", &qty);

    float total = price * qty;

    printf("total bill = %.2f\n", total);

    return 0;
}