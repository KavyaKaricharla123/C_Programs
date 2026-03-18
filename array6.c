#include <stdio.h>

int main(){

    int n,i;
    int search,c=0;
    printf("Enter the length of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int second_largest = arr[0]; //2 4 11 33 12
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
            
        }
        else if(arr[i]>second_largest && arr[i]!=second_largest ){
            second_largest = arr[i];

        }
    }
    printf("Second Largest = %d",second_largest );

    return 0;

}
