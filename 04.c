#include <stdio.h>


void main(){
    long long int user_num;
    printf("\t================ Even Or Odd ==================\n");
    printf("\n\tEnter a number to find it's odd or not: ");
    scanf("%d",&user_num);
    if(user_num%2==0){
        printf("\n\t%d is an Even Number.",user_num);

    }else{
        printf("\n\t%d is an Odd Number.",user_num);
    };
}