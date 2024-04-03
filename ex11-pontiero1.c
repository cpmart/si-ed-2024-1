#include <stdio.h>

int main(){
    int num, *pnum;
    num = 10;
    printf("num: %d\n",num);
    pnum = &num;
    *pnum = 20;
    printf("num: %d\n",num);
    printf("*pnum: %d\n",*pnum);
    printf("&num: %p\n",&num);
    printf("pnum: %p\n",pnum);
}