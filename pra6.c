#include <stdio.h>
int main(){
    int n;
    printf("Enter rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int k=1; k<i; k++){
            printf(" ");
        }

        for(int j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");

    }

}