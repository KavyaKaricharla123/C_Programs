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
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i= len-1; i>=0;i--){
        printf("%d ", arr[i]);

    }
    return 0;

}
