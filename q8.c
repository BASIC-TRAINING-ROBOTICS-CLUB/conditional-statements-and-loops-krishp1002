//check if an entered character is a vowel

#include <stdio.h>

int main(){
    char a;
    printf("Enter Charcter : ");
    scanf("%c",&a);
    
    if(a=='A' || a=='a' || a=='E' || a=='e' || a=='I' || a=='i' || a=='O' || a=='o' || a=='U' || a=='u'){
        printf("charcter is vowel");
    }
    else{
        printf("character is consonant");
    }
return 0 ;
}
