#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
} Node ;

Node* createNode(int val){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    return node;
}

Node* insertAtHead(Node* head, int value){
    Node* temp = createNode(value);
    temp->next = head;
    return temp;
}

Node* insertAtK(Node* head, int value , int k){
    Node* temp = head;
    int c = 0;
    for(int i = 1; i<k; i++){
        temp = temp->next;
    }
    Node* temp2 = createNode(value);
    Node* temp3 = temp->next;
    temp->next = temp2;
    temp2->next = temp3;
    return head;
}

Node* insertAtTail(Node* head, int value){
    Node* temp = createNode(value);
    Node* temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return head;
}

void display(Node* head){
    Node* temp = head;
    printf("\n");
    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printf("The current linked list is : \n");
    display(head);

    head = insertAtHead(head,0);
    printf("The linked list after insertion of 0 before head is : \n");
    display(head);

    head = insertAtK(head, 23 , 3);
    printf("The linked list after insertion of 23 at 3 index is : \n");
    display(head);
    
    return 0;
}