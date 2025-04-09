#include<stdio.h>
#include<stdlib.h>

int main(){

    size_t size = 4;
    size_t currentSize = 0;
    int* arr = (int*)malloc(size * sizeof(int));
    
    for(int i=0;i<30;i++){
        if(currentSize>=size){
            arr = (int*)realloc(arr, size*2*sizeof(int*));
            size*=2;
        }
        arr[i] = i;
        currentSize++;
    }

    for(int i=0;i<currentSize;i++){
        printf("%d   ", arr[i]);
    }

    free(arr);
    return 0;

}