#include<stdio.h>
void addition(int a, int b);
void multiplication(int a, int b);
void divison(int a, int b);
void subtraction(int a, int b);

void main(){
    int a,b;
    int c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Choose \n1. Addition\n2. Multiplication \n3. Division \n4. Subtraction: ");
    scanf("%d",&c);
    switch (c){
        case 1: 
            addition(a,b);
            break;
        case 2: 
            multiplication(a,b); 
            break;
        case 3: 
            divison(a,b);
            break;
        case 4: 
            subtraction(a,b);
            break;
        default: 
            printf("Wrong input...");
    }
        
    return;
}

void addition(int a, int b){
    printf("The addition of %d and %d is: %d",a,b,a+b); 

}
void multiplication(int a, int b){
    printf("The multiplication of %d and %d is: %d",a,b,a*b);
}
void divison(int a, int b){
    printf("The division of %d and %d is: %d",a,b,a/b); 
}
void subtraction(int a, int b){
    printf("The subtraction of %d and %d is: %d",a,b,a-b);

}
