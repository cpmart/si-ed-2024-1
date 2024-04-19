#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N],vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%51;
        printf("%d\n",vetA[i]);
    }
    for(int i=0; i<N; i++){
        vetB[N-1-i] = vetA[i];
    }
    printf("\n");
    for(int i=0; i<N; i++){
        printf("%2d - %2d\n",vetA[i],vetB[i]);
    }
}



