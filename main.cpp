#include <stdio.h>

int main(){
  int a,b,gcd;
  scanf("%d %d", &a, &b);
  
  while(a!=0){
    gcd=a;
    a=b%a;
    b=gcd;
    }
    
    printf("%d", gcd);
}
