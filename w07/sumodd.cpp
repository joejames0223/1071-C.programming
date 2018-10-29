#include <stdio.h>
//n is odd
// sumodd1(n) = 1+3+5+...(2n-1)
// sumodd2(n) = 1+3+5+...n
int sumodd1(int n){
     int total=0;
     for(int i=1;i<=n;i++){
        total =total+(2*i-1);
     }
     return total;
 }

 int sumodd2(int n){
    int all=0;
     for(int i=1;i<=n/2+1;i++){
        all =all+(2*i-1);
     }
     return all;
}

int main(){
    int n;
    printf("Enter n: ");           //加入這一行即可
    scanf("%d", &n);
    printf("sumodd1(%d)=%d\n",n,sumodd1(n));
    printf("sumodd2(%d)=%d\n",n,sumodd2(n));
}
int sumodd2(int n);
