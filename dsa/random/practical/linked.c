#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
} Node ;

Node* createNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d -> " , temp->data);
        temp = temp->next;
    }
}

Node* deleteAtK(Node* head, int k){
    int c = 0;
    Node* temp = head;
    while(c<k-1){
        temp = temp->next;
        c++;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
    return head;
}

int main(){
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    display(head);
    printf("\n");
    head = deleteAtK(head,2);
    display(head);
    return 0;
}

