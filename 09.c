// Program to multiply two numbers using regression
#include<stdio.h>

int mul_two_numbers(int a, int b);
void main(){
    int a,b;
    printf("\n\t================== Program to multiply two numbers using regression ===================");
    printf("\n\tEnter 1st number: ");
    scanf("%d",&a);
    printf("\n\tEnter 2nd number: ");
    scanf("%d",&b);
    printf("\n\tMultiplication of %d and %d is %d",a,b,mul_two_numbers(a,b));
    return;
}
int mul_two_numbers(int a, int b){
    if(b==1){
        return a;
    }else if(a==0 || b==0){
        return 0;
    }else{
        return a + mul_two_numbers(a,b-1);
    }
}