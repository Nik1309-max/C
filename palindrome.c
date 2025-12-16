#inclue <stdio.h>
int main(){
  int a = 10;
  int b = 0;
  while(a>0){
      a%10+=b;
      a = a // (10);
  };
  if(a==b){
      printf("True");
  }else{
      printf("False");
  };
  
  return 0;
}
