#include <stdio.h>
#include <string.h>

int main(){

    char name[10] = "Manan";
    char tempname[10];

    strcpy(name,tempname);

    int len = sizeof(name)/sizeof(char)-1;

    for(int i=0;i<=len;i++){
        name[i] = tempname[len-i];
        printf("%c",name[i]);
    }

    printf("%s",name);

    return 0;
}