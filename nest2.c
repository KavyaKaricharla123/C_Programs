#include<stdio.h>
/*
*****
****
***
**
*
*/
int main(){
    int rows = 5, columns = 5;
    int i,j;
    for(i=1;i<=rows;i++)
    {
        for(j=rows-i ;j>0;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}