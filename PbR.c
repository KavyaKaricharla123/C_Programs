#include <stdio.h>
 
void change(int *p){
    *p = 20;
    printf("p= %d \n", *p); //20 
}


int main(){
    int a = 10;
    change(&a); //pass by address
    printf("a= %d", a); // 20
}