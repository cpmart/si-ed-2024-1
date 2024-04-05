#include <stdio.h>

long calcularFatorial(int num);

int main(){
    int num=5;
    long fatorial;
    fatorial = calcularFatorial(num);
    printf("Fatorial: %d\n",fatorial);
}

long calcularFatorial(int num){
    if(num == 0)
        return 1;
    else
        return num * calcularFatorial(num-1);
}