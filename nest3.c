#include<stdio.h>
/*
    *
   **
  ***
 ****
*****
*/
int main(){
    int rows = 5, columns = 5;
    int i,j;
    for(i=0;i<=rows;i++){
        for(j=columns-1;j>=columns-1-i;j--){
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;

}