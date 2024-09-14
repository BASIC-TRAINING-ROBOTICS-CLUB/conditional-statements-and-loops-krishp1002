//max of 3 numbers

#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3){
        printf("The maximum number is %d",n1);
    }
    else if(n2>=n1 && n2>=n3){
        printf("The maximum number is %d",n2);
    }
    else{
        printf("The maximum number is %d",n3);
    }

    return 0;
}
