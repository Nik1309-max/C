#include<stdio.h>
int decimal_to_binary(int a);
void main(){
    int a;
    printf("\n\t============== Decimal to Binary converter ================");
    printf("\n\tEnter a decimal number to convert it into binary: ");
    scanf("%d",&a);
    printf("\n\tBinary value of decimal number %d is %d",a,decimal_to_binary(a));
    return;
}

int decimal_to_binary(int a){
    if(a==1){
        return 1;
    }else{
        return a%2+decimal_to_binary(a/2)*10;
    }
}