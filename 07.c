#include <stdio.h>
int main(){
    // Program to convert degree celcius into ferhenheit
    // float a,result;
    // printf("Enter temperature in degree celcius: ");
    // scanf("%f",&a);
    // result = a * (9.0/5) + 32;
    // printf("%f",result);

    // int a,b;
    // a = 2;
    // b = 4;
    // printf("%d\n",a&&b);
    // printf("%d\n",a||b);
    // printf("%d\n",!b);

    // int a =2,b = 3;
    // printf("%d\n",a&b);
    // printf("%d\n",a|b);
    // printf("%d\n",a^b);
    // printf("%d\n",a>>1);
    // printf("%d\n",a<<3);
    // printf("%d\n",~b);

    // int a = 4, b = 5;
    // printf("%d",a==b);
    // printf("%d",a>b);
    // printf("%d",a<b);
    // printf("%d",a<=b);
    // printf("%d",a>=b);
    // printf("%d",a!=b);

    int a,b;
    a=4;
    b=5;
    if(a>b){
        printf("Max number between %d and %d is %d",a,b,a);
    }else if(a<b){
        printf("Max number between %d and %d is %d",a,b,b);
    }else{
        printf("Both are equal");
    }
    return 0;
}



