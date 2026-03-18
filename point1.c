#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("%d \n", a);
    printf("%d \n", *p);
    printf("%p \n", &a);
    printf("%p \n", p);
    printf("%p \n", &p);
    printf("%p \n", pp);
    printf("%p \n", *pp);
    printf("%d \n", **pp);
    printf("%p \n", &pp);
    
}
