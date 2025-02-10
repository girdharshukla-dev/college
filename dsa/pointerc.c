#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

int main(){

    int arr[] ={0,1,2,3,4,5};
    struct Node* head = (struct Node *)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;
    struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
    temp = head;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        struct Node* temp2 = (struct Node *)malloc(sizeof(struct Node));
        temp2->data=arr[i];
        temp2->next=NULL;
        temp->next=temp2;
        temp=temp2;
    }

    printf("this is the linked list \n");
    temp = head;
    while(temp!=NULL){
        printf("%d -> ",(temp->data));
        temp=temp->next;
    }
    return 0;

}

