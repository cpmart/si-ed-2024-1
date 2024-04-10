#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N];
    float media=0;
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i] = rand()%21;
        printf("%d\n",vet[i]);
    }
    printf("---Imprimindo de trás pra frente---\n");
    for(int i=N-1; i>=0; i--){
        printf("%d\n",vet[i]);
    } 
}