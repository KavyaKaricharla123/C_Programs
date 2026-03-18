#include <stdio.h>

int main(){

    int n;
    int i;
    printf("length of an array:");
    scanf("%d", &n );
    int arr[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small = arr[0];
    for(i=0;i<n;i++){
       if(arr[i]<small)
            small = arr[i];
    }
    printf("Smallest = %d", small);
    return 0;

}