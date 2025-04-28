#include<stdio.h>
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<length-2 ; i++){
       int min = i;
       for(int j = i+1; j<length ;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
       }
       int temp = arr[min];
       arr[min] = arr[i];
       arr[i]= temp;
    }

    for(int i=0;i<length;i++){
        printf("%d " , arr[i]);
    }
}