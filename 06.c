#include <stdio.h>
int sum(int n,int a);
int main(){
    int c = sum(12,2);
    printf("%d",c);
    return 0;
}
int sum(int n,int a){
    if(n==0){
        return 1;
    }else{
        return a*sum(n-1,a);
    }
}