#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int i;

    arr = (int *)malloc(5* sizeof(int));

    for(i =0; i<5 ; i++){
        *(arr+i)= i*10;
     }
    
    for(i=0; i<5; i++){
        printf("%d\n", *(arr+i));

    }
    free(arr); // always clear heap memory
    arr = NULL; // to avoid accidental access and dangling pointer
    printf("%d\n", *(arr+2));
}