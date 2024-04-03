#include <stdio.h>

void trocarValor(int *a, int *b);
int main(){
    int a, b;
    a = 10;
    b = 20;
    printf("a = %d <==> b = %d\n",a,b);
    trocarValor(&a, &b);
    printf("a = %d <==> b = %d\n",a,b);
}

void trocarValor(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
/*
void trocarValor(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}*/