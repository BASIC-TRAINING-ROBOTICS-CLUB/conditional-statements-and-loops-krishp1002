//program to check if the year entered after 2000 and its a leap year

#include<stdio.h>

int main(){
    int year;
    printf("Enter Year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }
    return 0;
}
