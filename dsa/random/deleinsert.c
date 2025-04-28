#include<stdio.h>

int main(){
    int arr[6];
    printf("Enter 5 elements \n");
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    int insertIndex;
    int num;
    printf("Enter the number to be inserted\n");
    scanf("%d",&num);
    printf("Enter the index where to insert\n");
    scanf("%d",&insertIndex);
    int index = 5;

    while(index >= insertIndex){
        if(index == insertIndex){
            arr[index] = num;
            break;
        }
        arr[index] = arr[index-1];
        index--;
    }

    printf("The array after insertion is \n");
    for(int i=0;i<6;i++){
        printf("%d   ",arr[i]);
    }

    int deleteIndex;
    printf("Enter the index where to delete the element\n");
    scanf("%d", &deleteIndex);
    index = deleteIndex;
    while(index<5){
        arr[index] = arr[index+1];
        index ++;
    }

    printf("The array after deletion is \n");
    for(int i=0;i<6;i++){
        printf("%d   ",arr[i]);
    }

    return 0;
}