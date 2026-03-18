#include <stdio.h>

int main(){

    int n,i,j;
    printf("Enter the length of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in an array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(i=0;i<n;i++){  //0 to 4 (n=5)
        for(j=i+1;j<n;j++){ 
            if(arr[i]==arr[j]){
                count++;
                break;
            }
            
        }

    }
    printf("%d", count);
}
