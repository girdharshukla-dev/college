#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int val;
    struct Node* next;
} Node ;

Node* createNode(int val){
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = val;
    node->next=NULL;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d  ",temp->val);
        temp = temp->next;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    Node* head = createNode(arr[0]);
    Node* temp = head;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        Node* temp2 = createNode(arr[i]);
        temp->next=temp2;
        temp = temp2;
    }
    display(head);
    printf("\n");
    
    Node* tempBack = head;
    temp = head->next;
    head->next = NULL;
    while(temp!=NULL){
        Node* temp2 = temp->next;
        if(temp2 == NULL) head = temp;
        temp->next = tempBack;
        tempBack = temp;
        temp = temp2;
    }

    display(head);

}