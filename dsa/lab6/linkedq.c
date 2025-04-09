#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int size = 0;

typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* front;
Node* rear;

Node* createNode(int val){
    Node* node = (Node*)malloc(sizeof(Node));
    
}

int main(){
    _Bool c ;
    printf("%d\n",c);
    return 0;
}
