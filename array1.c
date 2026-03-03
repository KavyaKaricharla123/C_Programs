#include <stdio.h>

int main() {
    int array[5] = {1,2,3,4,5};
    int *ptr = array;
    int n = sizeof(array)/sizeof(array[0]);
     for(int i = 0; i < n; i++){
        printf("%d ", *ptr +i );
    }

}