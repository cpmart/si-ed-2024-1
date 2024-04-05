#include <stdio.h>

int soma(int num);
int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    printf("Soma total: %d\n",soma(num));
}

int soma(int num){
    if(num==0)
        return 0;
    else
        return num + soma(num-1);
}