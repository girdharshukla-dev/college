#include<stdio.h>
#include<stdlib.h>
int main(){

    int *arr;
    arr = (int*)malloc(2*sizeof(int));
    arr[0]=0;
    arr[1]=1;
    arr[2] = 3;
    printf("%d",arr[2]);
    return 0;
}