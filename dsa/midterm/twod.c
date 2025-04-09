#include<stdio.h>
#include<stdlib.h>

int main(){
    int** arr = (int**)malloc(sizeof(int*));
    arr[0] =  (int*)malloc(sizeof(int));
    arr[0][0] = 0;
    arr[0][1] = 1;

    arr[1] =  (int*)malloc(sizeof(int));
    arr[1][0] = 2;
    arr[1][1] = 3;
    
    printf("%d",arr[1][1]);
}