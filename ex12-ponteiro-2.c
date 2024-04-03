#include <stdio.h>

void preenche(int *pnumero);

int main(){
    int numero = 0;
    preenche(&numero);
    printf("Número: %d\n",numero);
}

void preenche(int *pnumero){
    printf("Digite um valor: ");
    scanf("%d",pnumero);
    scanf("%d",&*pnumero);
    scanf("%d",&*&*pnumero);
    *pnumero += 200;
}