#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>


// protótipo
int menu();
float calcularAreaCirculo(float raio);
float calcularAreaQuadrado(float lado);
float calcularAreaTriangulo(float base, float altura);
float calcularAreaTrapezio(float baseMenor, float baseMaior, float altura);

int main()
{

    int opcao = 1;
    float raio, lado, base, baseMaior, baseMenor, altura, resultado;

    while (opcao)
    {
        opcao = menu();

        switch (opcao)
        {
        case 1:
            printf("Raio: ");
            scanf("%f", &raio);
            resultado = calcularAreaCirculo(raio);
            printf("Área do círculo é: %g\n", resultado);
            break;
        case 2:
            printf("Lado: ");
            scanf("%f", &lado);
            resultado = calcularAreaQuadrado(lado);
            printf("Área do quadrado é: %g\n", resultado);
            break;
        case 3:
            printf("Base: ");
            scanf("%f", &base);
            printf("Altura: ");
            scanf("%f", &altura);
            resultado = calcularAreaTriangulo(base, altura);
            printf("Área do triângulo é: %g\n", resultado);
            break;
        case 4:
            printf("Base menor: ");
            scanf("%f", &baseMenor);
            printf("Base maior: ");
            scanf("%f", &baseMaior);
            printf("Altura: ");
            scanf("%f", &altura);
            resultado = calcularAreaTrapezio(baseMenor, baseMaior, altura);
            printf("Área do trapézio é: %g\n", resultado);
            break;

        case 0:
            printf("Já vai tarde!!!\n");
            break;
        default:
            printf("Opção inválida!!!\n");
            break;
        }
        sleep(3);
    }
}

int menu()
{
    int opcao;
    system("clear");
    printf("[1] Calcular área do círculo\n");
    printf("[2] Calcular área do quadrado\n");
    printf("[3] Calcular área do triângulo\n");
    printf("[4] Calcular área do trapézio\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

float calcularAreaCirculo(float raio){
    return 3.14 * pow(raio, 2);
}

float calcularAreaQuadrado(float lado){
    return lado * lado;
}
float calcularAreaTriangulo(float base, float altura){
    return base * altura / 2;
}
float calcularAreaTrapezio(float baseMenor, float baseMaior, float altura){
    return (baseMenor + baseMaior) * altura / 2;
}