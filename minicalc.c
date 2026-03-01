#include <stdio.h>

int calc_fn();
int check();

int main(){
    calc_fn();
    return 0;
}

int calc_fn(){
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);  // ← Remove \n
    printf("Enter second number: ");
    scanf("%d", &b);  // ← Remove \n

    printf("Addition: %d + %d = %d\n", a, b, a+b);
    printf("Subtraction: %d - %d = %d\n", a, b, a-b);
    printf("Multiplication: %d * %d = %d\n", a, b, a*b);
    
    if(b != 0){
        printf("Division: %d / %d = %d\n", a, b, a/b);
    } else {
        printf("Division: Error! Cannot divide by 0.\n");
    }
    
    check();
    return 0;
}

int check(){
    int c;
    
    printf("\nDo you want to perform another calculation? (1 for Yes / 0 for No): ");
    scanf("%d", &c);  // ← Remove \n
    
    if(c == 1){
        calc_fn();
    } else {
        printf("Exiting calculator.\n");
        return 0;
    }
    
    return 0;
}