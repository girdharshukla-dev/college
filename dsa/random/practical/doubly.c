#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
} Node ;

Node* createNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    Node* head = createNode(arr[0]);
    Node* prevTemp = head;
    int c = 1;
    while(c<10){
        Node* node = createNode(arr[c]);
        prevTemp->next = node;
        node->prev = prevTemp;
        prevTemp = node;
        c++;
    }

    Node* temp = head;
    temp = temp->next->next->next;
    printf("%d ", temp->prev->data);

}