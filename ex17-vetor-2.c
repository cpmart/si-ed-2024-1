#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%51;
        printf("%d\n",vet[i]);
    }
    printf("---Dobro---\n");
    for(int i=0; i<N; i++){
        vet[i] *= 2;
        printf("%d\n",vet[i]);
    }

}