#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top = -1;


typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}
Node* head;

int push(int x){
    if(top == SIZE-1){
        printf("Stack overflow");
    }
    else if(top == -1){
        head = createNode(x);
        printf("pushed %d\n",x);
        top++;
    }
    else{
        top++;
        Node* temp = createNode(x);
        temp->next = head;
        head = temp;
        printf("pushed %d\n",x);
    }
}

int peek(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("At top is %d \n", head->data);
    }
}

int pop(){
    if(top == -1){
        printf("Stack underflow \n");
    }
    else{
        Node* temp = head;
        head=head->next;
        top --;
        printf("removed %d\n", temp->data);
        free(temp);
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    pop();
    push(7);
    peek();
}