#include<stdio.h>
#include<stdlib.h>

int main(){
    char *arr;
    int i;

    arr = (char * )calloc(5, sizeof(char));

    for(i = 0; i<5; i++){
        *(arr+i) = 'a';
    }
    for (i=0; i<5;i++){
        printf(" '%c ' ",*(arr+i));
    }
    free(arr);
}