#include <stdio.h>

char checkForValidChar();

int main() {

    printf("Enter your character\n>> ");
    char c = checkForValidChar();

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("%c is a vowel",c);
    }
    else if((c>='A' && c<='Z') || (c>='a' && c<='z')){
        printf("%c is a consonent",c);
    }
    else if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9'){
        printf("%c is a digit",c);
    }
    else{
        printf("%c is a special character",c);
    }

    return 0;
}

char checkForValidChar(){
    char c;
    while(scanf(" %c",&c) != 1){
        while((c=getchar()) != '\n' && c != EOF);
        printf("Invalid character\n");
    }
    return c;
}