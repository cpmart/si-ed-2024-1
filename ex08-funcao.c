#include <stdio.h>

void printBaiano()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Baiano\n");
        printf("Fatec\n");
    }
}
float valorPI(){
    return 3.14159;
}
void dobrarValor(int num){
    printf("Dobro: %d\n",num*2);
}
int soma(int n1, int n2){
    return n1+n2;
}
int main()
{
    int total;
    printBaiano();
    printf("PI = %g\n",valorPI());
    dobrarValor(10);
    total = soma(3,4);
}