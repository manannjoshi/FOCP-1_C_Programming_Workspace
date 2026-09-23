#include <stdio.h>
#include <math.h>

double checkForValidDouble();
int checkForValidInt();
void showBalance(double bal);

int main() {
    int choice;
    double w_amount = 0;
    int pin;
    double bal = 10000;
    double money = 0;
    printf("Welcome to The NorthCap Bank\n\n");

    while(1){
        printf("What would you like to do?\n1) Withdraw Money\n2) Check Balance\n>> ");
        choice = checkForValidInt();

        if(choice==1){
            printf("How much money would you like to withdraw?\n>> ");
            w_amount = checkForValidDouble();
            printf("Enter your pin\n>> ");
            pin = checkForValidInt();
            if(pin==1234){
                if(fmod(w_amount,100)==0){
                    if(w_amount>0){
                        if(bal>=w_amount){
                            money = money + w_amount;
                            bal = bal - w_amount;
                            printf("==================================================\n");
                            printf("Successfully deposited %0.2f$ in your bank\n",w_amount);
                            printf("===================================================\n");
                        }
                        else{
                            printf("Unsufficient funds\n");
                        }
                    }
                    else{
                        printf("Amount must be greater than 0\n");
                    }        
                }
                else{
                    printf("Amount is not a multiple of 100\n");
                }
            }
            else{
                printf("PIN is incorrect\n");
            }
        }
        else if(choice==2){
            printf("Your balance is :\nBank : %0.2f$\nMoney : %0.2f$\n",bal,money);
        }
        else{
            printf("Invalid choice, try again.\n");
            int c;
            while((c=getchar()) != '\n' && c != EOF);
        }
    }
    
    return 0;
}

double checkForValidDouble(){
    double num;
    while(scanf("%lf",&num) != 1){
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        printf("Invalid input, Try again\nEnter your number\n>> ");
    }
    return num;
}

int checkForValidInt(){
    int num;
    while(scanf("%d",&num) != 1){
        int c;
        while((c = getchar()) != '\n' && c != EOF);
        printf("Invalid input, Try again\n>> ");
    }
    return num;
}