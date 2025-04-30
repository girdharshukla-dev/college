#include<stdio.h>
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    
    for(int i=1;i<10;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0 ; i<10 ; i++){
        printf(" %d",arr[i]);
    }
    
    return 0;
}