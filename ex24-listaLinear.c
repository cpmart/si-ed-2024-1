#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 5
struct TipoNodo
{
    int codigo;
    char nome[10];
    float altura;
};
typedef struct TipoNodo TipoNodo;

int menuOpcoes();
int inserirInicio(TipoNodo listaLinear[], int inicioArranjo, int finalArranjo, int *inicioLista, int *finalLista, TipoNodo infoNodo);
int mostrarLista(TipoNodo listaLinear[], int inicioArranjo, int finalArranjo, int inicioLista, int finalLista);

int main()
{
    TipoNodo listaLinear[N], infoNodo;
    int inicioArranjo=0, finalArranjo=N-1, inicioLista=-1, finalLista=-1, opcao;
    do
    {
        system("clear");
        opcao = menuOpcoes();
        switch (opcao)
        {
        case 1:
            printf("Inserindo no início...\n");
            printf("Codigo: ");
            scanf("%d",&infoNodo.codigo);
            printf("Nome: ");
            scanf("%s",infoNodo.nome);
            printf("Altura: ");
            scanf("%f",&infoNodo.altura);
            inserirInicio(listaLinear,inicioArranjo, finalArranjo, &inicioLista, &finalLista, infoNodo);
            break;
        case 2:
            printf("Mostrando...\n");
            mostrarLista(listaLinear,inicioArranjo, finalArranjo, inicioLista, finalLista);
            break;
        case 0:
            printf("Já vai tarde, animal!!!\n");
            break;
        default:
            printf("Opção inválida! Jumento!!!\n");
            break;
        }
        sleep(3);
    } while (opcao != 0);
}

int menuOpcoes()
{
    int opcao;
    printf(":::::::: M E N U ::::::::\n");
    printf("[1] Inserir Início\n");
    printf("[2] Mostrar\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    return opcao;
}

int inserirInicio(TipoNodo listaLinear[], int inicioArranjo, int finalArranjo, int *inicioLista, int *finalLista, TipoNodo infoNodo)
{
    if (inicioArranjo == *inicioLista && finalArranjo == *finalLista) 
        return 1;    //deu erro - lista bufando!!
    else 
    {
        if (*inicioLista == -1)      //LL vazio
            *inicioLista = *finalLista = inicioArranjo;
        else if (*inicioLista > inicioArranjo)  //Se tiver espaço
            *inicioLista = *inicioLista-1;                  
        else 
        {       
            for(int i=*finalLista; i>=*inicioLista; i--)
                listaLinear[i+1] = listaLinear[i];
            *finalLista = *finalLista+1;
        }
        listaLinear[*inicioLista] = infoNodo;
        return 0;
    }
}

int mostrarLista(TipoNodo listaLinear[], int inicioArranjo, int finalArranjo, int inicioLista, int finalLista){
    printf("Código - Altura - Nome\n");
    for(int i=inicioArranjo; i<=finalArranjo; i++){
        if(i>=inicioLista && i<=finalLista)
            printf("%3d - %4.2f - %s\n",listaLinear[i].codigo,listaLinear[i].altura,listaLinear[i].nome);
        else   
            printf("---------\n");
    }
}