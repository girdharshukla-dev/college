#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr = (int*)malloc(2*sizeof(int));
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;

    printf("%d",arr[4]);
    return 0;

}