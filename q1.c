//program to check odd and even numbers

#include <stdio.h>

int main()
{
    int num ;
    printf("NUMBER : ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
    return 0;
}
