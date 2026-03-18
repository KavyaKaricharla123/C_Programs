#include<stdio.h>

void change(int x){
    x = 20;
    printf(" x= %d \n", x); //20
}


int main(){
    int a = 10;
    change(a);
    printf("%d",a); //10
}
