#include <stdio.h>

int main(){

    int n,i;
    int even = 0, odd = 0;

    printf("Enter the length of an array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements in an array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even = %d , Odd = %d", even, odd);

    return 0;
}