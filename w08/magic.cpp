#include <stdio.h>

#define MAX 50

void prArr(int m[][MAX], int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
}

void magic_diag(int m[][MAX], int N){
    int row=N-1;
    int col=N/2;
    m[row][col] = 1;
    for(int i=2;i<=N*N;i++){
     //find next row, col
     if(i%N==1){
            row = (row-1+N)%N;
     }else{
         row = (row+1)%N;
         col = (col+1)%N;
     }
     m[row][col] = i;
    }
}

void magic_knight(int m[][MAX], int N){
    int row=N-1;
    int col=N/2;
    m[row][col] = 1;
    for(int i=2;i<=N*N;i++){
     //find next row, col
     if(i%N==1){
            row = (row-1+N)%N;
     }else{
         row = (row-2+N)%N;      //這邊出trouble
         col = (col+1+N)%N;
     }
     m[row][col] = i;
    }
}
int main(){
    int m[MAX][MAX]={0};
    int N=5;
    //prArr(m,N);
    printf("\nDiagonal Move\n");
    magic_diag(m,N);
    prArr(m,N);

    printf("\nKnight Move\n");
    magic_knight(m,N);
    prArr(m,N);
}


/*Diagonal Move
 11  18  25   2   9
 10  12  19  21   3
  4   6  13  20  22
 23   5   7  14  16
 17  24   1   8  15
Knight Move
 17   6  25  14   3
 11   5  19   8  22
 10  24  13   2  16
  4  18   7  21  15
 23  12   1  20   9*/
