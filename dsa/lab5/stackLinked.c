#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int top = -1;
typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* head = NULL;
Node* temp = NULL; 

Node* createNode(int val){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    return node;
}

void push(int x){
    if(top == SIZE){
        printf("Stack overflow");
    }
    else if(top == -1){
        head = createNode(x);
        temp = head;
        top++;
        printf("pushed %d\n",x);
    }
    else{
        top++;
        Node* node = createNode(x);
        node->next = temp;
        temp = node;
        printf("pushed %d\n",x);
    }
}

void display(){
    Node* temp2 = temp;
    int c = 0;
    if(top == -1){
        printf("Stack underflow \n");
    }
    while(c<=top){
        printf("%d <-- ",temp2->data);
        c++;
        temp2 = temp2->next;
    }
    printf("\n");
}

int peek(){
    if(top == -1){
        printf("Stack underflow\n");
        return -1;
    }
    else{
        int a = temp->data;
        printf("the element at top is %d\n", a);
        return a;
    }
}

int pop(){
    if(top == -1){
        printf("Stack underflow");
        return -1;
    }
    else{
        Node* del = temp;
        int a = del->data;
        temp = temp->next;
        free(del);
        top--;
        printf("Removed %d \n ", a);
        return a;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    peek();
    display();
    pop();
    peek();
    display();
    return 0;
}