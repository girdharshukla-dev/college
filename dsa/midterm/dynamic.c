#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr = (int*)malloc(sizeof(int));
    arr[0] = 0;
    int x =10;
    int y=0;
    printf("%d\n",x/y);
    free(arr);
    // printf("%d",arr[1]);
}