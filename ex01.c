#include <stdio.h>

int main(){
    int x = 10, y, z;
    y = ++x;
    printf("y = %d\n",y);   //11
    z = ++y /*12*/+ x++ /*11*/;
    printf("z = %d\n",z);   //23
    x = z++ * 3;            
    printf("x = %d\n",x);   //69


}