#include <stdio.h>

int mainMenu(char newName[10], char newPass[10]);
char signup();
void login();

int main(){

    printf("Welcome to North Cap Bank\n");

    while(1){
        int choice;
        printf("Do you want to sign up or log in?\n1) Sign up\n2) Log In\n>> ");
        scanf("%d",&choice);

        if(choice==1){
            signup();
        }
        else if(choice==2){
            login();
        }
        else{
            printf("Not recognised. Try again.\n");
        }
    }

    return 0;
}

char signup(){
    printf("========================================\n");
    char newName[10];
    char newPass[10];
    printf("SIGN-UP\nEnter your name\n>> ");
    scanf("%s",&newName);
    printf("Enter a password for your account\n>> ");
    scanf("%s",&newPass);

    mainMenu(newName,newPass);
}

void login(){

}

int mainMenu(char newUser[10], char newPass[10]){
    printf("%s",newUser,"\n");
    printf("%s",newPass);
    return 0;
}