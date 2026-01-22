#include <stdio.h>
int main(){
    int a,b,c;
    printf("\n\t============== Palindrome Checker==============\n");
    printf("\n\tEnter a number to find whether it's Palindrome or not: ");
    scanf("%d",&a);
    b = a;
    c = 0;
    while(b){
        c = c*10+(b%10);
        b/=10;
    };
    if(a==c){
        printf("\n\t%d is a Palindrome Number.\n",a);
    }else{
        printf("\n\t%d is not a Palindrome Number.\n",a);
    }
    return 0;
}

