//program to check if a triangle is equilateral sides length is given by user

#include <stdio.h>
int main(){
    int l1,l2,l3 ; 
    printf("Length of side 1 : ");
    scanf("%d",&l1);
    printf("Length of side 2 : ");
    scanf("%d",&l2);
    printf("Length of side 3 : ");
    scanf("%d",&l3);
    if(l1==l2 && l1==l3){
        printf("triangle is equilateral");
    }
    else{
        printf("triangle is not equilateral");
    }
    return 0;
}
