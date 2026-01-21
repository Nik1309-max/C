#include <stdio.h>
void main(){
    int a,b,c;
        printf("================= Armstrong Number Checker =================");
    printf("\n\tEnter a number to check whether it is armstrong number or not: ");
    scanf("%d",&a);
    b = a;
    c = 0;
    for(int i=1;i<b;i++){
        if(b%i==0){
            c+=i;
        }
    }
    if(a==c){
        printf("\n\t%d is an Armstrong Number.",b);
    }else{
        printf("\n\t%d is not an Armstrong Number.",b);
    }
    return;
}