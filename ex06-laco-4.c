#include <stdio.h>
#define N 100
    /*receba idade e altura 
    maior e menor altura e idade média*/
int main(){
    short idade, somaIdade=0, i;
    float altura, maior, menor;
    for(i=0; i<N; i++){
        printf("Idade (%hd): ",i);
        scanf("%hd",&idade);
        printf("Altura (%hd): ",i);
        scanf("%f",&altura);
        somaIdade += idade;
        if(i==0){
            maior=menor=altura;
        }
        else{
            if(altura > maior)
                maior = altura;
            else if(altura < menor)
                menor = altura;
        }
    }
    printf("A idade média é: %g\n",(float)somaIdade/N);
    printf("A maior altura é: %g\n",maior);
    printf("A menor altura é: %g\n",menor);

}