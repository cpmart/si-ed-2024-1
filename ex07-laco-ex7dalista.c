/*(WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.*/

#include <stdio.h>

int main(){
    float salario, somaSalarios=0;
    short quantidadeFilhos, continuar=1, qtdPessoas=0;
    while(continuar){
        printf("Informe o salário: ");
        scanf("%f",&salario);
        printf("Informe a qtd de filhos: ");
        scanf("%hd",&quantidadeFilhos);
        somaSalarios += salario;
        qtdPessoas++;
        
        printf("Deseja sair (0/1)?");
        scanf("%hd",&continuar);
    }
    printf("A média do salário da população: %g\n",somaSalarios/qtdPessoas);
    

}   