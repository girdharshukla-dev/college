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

Node* deleteHead(Node* head){
    Node* temp = head->next;
    free(head);
    return temp;
}

Node* deleteTail(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

Node* deleteAtK(Node* head, int k){
    int i = 0;
    Node* temp = head;
    while(i+1 != k){
        temp = temp->next;
        i++;
    }
    Node* temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
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

    printf("The list after head deletion is : \n");
    head = deleteHead(head);
    display(head);

    printf("The list after tail deletion is : \n");
    head = deleteTail(head);
    display(head);
    
    printf("The list after deletion of index 1 is : \n");
    head = deleteAtK(head,1);
    display(head);

    return 0;
}