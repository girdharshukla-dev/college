#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int val){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = val;
    node->next = NULL;
    return node;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    struct Node* head = createNode(arr[0]);
    struct Node* temp = head;
    
    for(int i=1;i<=8;i++){
        struct Node* temp2 = createNode(arr[i]);
        temp->next = temp2;
        temp = temp2;
    }


    struct Node* temp3 = head;
    while(temp3!=NULL){
        printf("%d -> ",temp3->data);
        temp3 = temp3->next;
    }

    struct Node* temp2 = createNode(1234);
    temp2->next = head->next;
    head->next = temp2;

    printf("\n");

    struct Node* temp4 = head;
    while(temp4!=NULL){
        printf("%d -> ",temp4->data);
        temp4 = temp4->next;
    }
}