#include<stdio.h>
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<length-1 ; i++){
        for(int j = 0; j <length-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<length;i++){
        printf("%d " , arr[i]);
    }
}