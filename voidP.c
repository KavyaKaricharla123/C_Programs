#include<stdio.h>

int main(){
    int x = 20;
    double y = 2.5;
    char z = 'a';

    void *vp;
    vp  = &x;
    printf("%d\n", *((int*)vp));

    vp = &y;
    printf("%f\n", *((double*)vp));

    vp = &z;
    printf("%c\n", *((char*)vp));

    return 0;
}