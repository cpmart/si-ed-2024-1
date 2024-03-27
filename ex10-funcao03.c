#include <stdio.h>

// Protótipo
int menuPrincipal(void);
int menuArea(void);
int menuVolume(void);
float areaQuadrado(float lado);
float areaCirculo(float raio);
float volumeCubo(float lado);
float volumeCilindro(float raio, float altura);
int escolherMenu();
int main()
{
    int opcao, opcaoSubMenu;
    float lado, raio, altura;
    while (opcao != 0)
    {
        opcao = menuPrincipal();
        switch (opcao)
        {
        case 1:
            do
            {
                opcaoSubMenu = menuArea();
                switch (opcaoSubMenu)
                {
                case 1:
                    printf("Lado: ");
                    scanf("%f", &lado);
                    printf("Área do quadrado: %g\n", areaQuadrado(lado));
                    break;
                case 2:
                    printf("Raio: ");
                    scanf("%f", &raio);
                    printf("Área do círculo: %g\n", areaCirculo(raio));
                    break;
                case 0:
                    break;
                default:
                    printf("Opção inválida! Animal!!!\n");
                    break;
                }
            } while (opcaoSubMenu != 0);
            break;
        case 2:
            do
            {
                opcaoSubMenu = menuVolume();
                switch (opcaoSubMenu)
                {
                case 1:
                    printf("Lado: ");
                    scanf("%f", &lado);
                    printf("Volume do cubo: %g\n", volumeCubo(lado));
                    break;
                case 2:
                    printf("Raio: ");
                    scanf("%f", &raio);
                    printf("Altura: ");
                    scanf("%f", &altura);
                    printf("Volume do cilindro: %g\n", volumeCilindro(raio, altura));
                    break;
                case 0:
                    break;
                default:
                    printf("Opção inválida! Animal!!!\n");
                    break;
                }
            } while (opcaoSubMenu != 0);
            break;
        case 0:
            printf("Já vai tarde!!! Animal!!!\n");
            break;
        default:
            printf("Opção inválida! Animal!!!\n");
            break;
        }
    }
}
int menuPrincipal(void)
{
    printf("========MENU PRINCIPAL============\n");
    printf("[1] Área\n");
    printf("[2] Volume\n");
    printf("[0] Sair\n");
    return escolherMenu();
}

int menuArea()
{
    printf("========MENU ÁREA============\n");
    printf("[1] Área Quadrado\n");
    printf("[2] Área Círculo\n");
    printf("[0] Sair\n");
    return escolherMenu();
}

int menuVolume()
{
    printf("========MENU VOLUME============\n");
    printf("[1] Volume do Cubo\n");
    printf("[2] Volume do Cilindro\n");
    printf("[0] Sair\n");
    return escolherMenu();
}

float areaQuadrado(float lado){
    return lado*lado;
}

float areaCirculo(float raio){
    return 3.14 * raio * raio;
}

float volumeCubo(float lado){
    return lado * areaQuadrado(lado);
}

float volumeCilindro(float raio, float altura){
    return altura * areaCirculo(raio);
}

int escolherMenu(){
    int opcao;
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}