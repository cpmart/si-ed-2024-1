#include <stdio.h>

int main(){
    int num, i;
    printf("Digite o número: ");
    scanf("%d",&num);
    for (i = 1; i < 11; i++)
        printf("%2d x %2d = %3d\n",num, i, num*i);    
}