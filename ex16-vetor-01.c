#include <stdio.h>

int main(){
    int vet[]={3,10,25,-7,9};
    int vet2[5];
    int vet3[3];
    vet2[4] = 22;
    vet2[1] = 44;
    vet2[3] = 11;
    vet2[2] = 66;
    vet2[0] = 35;
    printf("Digite o valor: ");scanf("%d",&vet3[0]);
    printf("Digite o valor: ");scanf("%d",&vet3[1]);
    printf("Digite o valor: ");scanf("%d",&vet3[2]);
    for(int i=0; i<5; i++){
        printf("%d\n",vet2[i]);
    }
}