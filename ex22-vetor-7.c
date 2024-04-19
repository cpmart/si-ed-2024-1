#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int A[N], B[N], C[2*N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        A[i]=rand()%51;
        B[i]=rand()%51;
        printf("%d - %d\n",A[i], B[i]);
    }
    for(int i=0;i<N; i++){
        C[i]=A[i];
        C[N+i]=B[i];
    }
    for(int i=0; i<2*N; i++){
        printf("%d\n",C[i]);
    }
}