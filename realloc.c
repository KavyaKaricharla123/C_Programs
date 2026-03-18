#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *ptr = (int *)calloc(5, sizeof(int));


    // Resize the memory block to hold 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    // Check for allocation failure
    if (ptr == NULL) {
        printf("Memory Reallocation Failed");
        exit(0);
    }
    for(i =0; i<9 ; i++)
     {
        printf("%d\n",ptr[i]);

    }

    return 0;
}