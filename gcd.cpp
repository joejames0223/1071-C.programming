#include <stdio.h>

int gcd(int a , int b){
    if(a==0) return b;   //return b ,因為a=0了，不須再回傳

    else
             return gcd(b%a,a);
}

int main(){
     printf("gcd(48,126) = %d\n", gcd(48,126));
     printf("gcd(48,128) = %d\n", gcd(48,128));
     printf("gcd(48,144) = %d\n", gcd(48,144));
     printf("gcd(48,48) = %d\n", gcd(48,48));
}

