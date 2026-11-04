#include <stdio.h>

int main(){

    int nums[11] = {};

    for(int k=0;k<10;k++){
        printf("Enter your %d num : ",k+1);
        scanf("%d",&nums[k]);
    }

    int max = nums[0];

    for(int i=0;i<10;i++){
        if(max<nums[i]){
            max = nums[i];
        }
    }

    printf("Maximum number from these is : %d",max);

    return 0;
}