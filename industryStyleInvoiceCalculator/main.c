#include <stdio.h>

int main(){

    int pid;
    float price;
    int qty;
    float disc;

    printf("enter product id: ");
    scanf("%d", &pid);
    printf("enter price: ");
    scanf("%f", &price);
    printf("enter quantity: ");
    scanf("%d", &qty);
    printf("enter discount percent: ");
    scanf("%f", &disc);

    float subtotal = price * qty;
    float discount = subtotal * disc / 100;
    float final = subtotal - discount;

    printf("product id = %d\n", pid);
    printf("subtotal = %.2f\n", subtotal);
    printf("discount = %.2f\n", discount);
    printf("final amount = %.2f\n", final);

    scanf("PRESS ENTER TO EXIT");

    return 0;
}