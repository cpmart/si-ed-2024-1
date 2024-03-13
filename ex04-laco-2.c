#include <stdio.h>

int main(){
    int num, i;
    for(num = 1;num<201; num++){
        printf("\n========== Tabuada do %3d ==========\n",num);
        for (i = 1; i < 11; i++)
        printf("%2d x %2d = %3d\n",num, i, num*i);    
    }
}