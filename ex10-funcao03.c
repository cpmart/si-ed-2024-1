#include <stdio.h>

//Protótipo
int menuPrincipal(void);
int main()
{
    int opcao, opcaoSubMenu;
    float lado, raio, altura;
    while (opcao != 0)
    {
        printf("========MENU PRINCIPAL============\n");
        printf("[1] Área\n");
        printf("[2] Volume\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            do
            {
                printf("========MENU ÁREA============\n");
                printf("[1] Área Quadrado\n");
                printf("[2] Área Círculo\n");
                printf("[0] Sair\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcaoSubMenu);
                switch (opcaoSubMenu)
                {
                case 1:
                    printf("Lado: ");
                    scanf("%f", &lado);
                    printf("Área do quadrado: %g\n", lado * lado);
                    break;
                case 2:
                    printf("Raio: ");
                    scanf("%f", &raio);
                    printf("Área do círculo: %g\n", 3.14 * raio * raio);
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
                printf("========MENU VOLUME============\n");
                printf("[1] Volume do Cubo\n");
                printf("[2] Volume do Cilindro\n");
                printf("[0] Sair\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcaoSubMenu);
                switch (opcaoSubMenu)
                {
                case 1:
                    printf("Lado: ");
                    scanf("%f", &lado);
                    printf("Volume do cubo: %g\n", lado * lado * lado);
                    break;
                case 2:
                    printf("Raio: ");
                    scanf("%f", &raio);
                    printf("Altura: ");
                    scanf("%f", &altura);
                    printf("Volume do cilindro: %g\n", 3.14 * raio * raio * altura);
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
