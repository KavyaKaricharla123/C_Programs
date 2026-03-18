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
    printf("Enter the element search:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            c++;
            break;
        }
    }
    if(c==1){
        printf("Element found at position %d",i);
    }
    else{
        printf("Element not found");
    }
}
