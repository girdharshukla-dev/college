#include<stdio.h>
#include<stdlib.h>
int* stack;
int size;
int top = -1;

void makeStack(size_t capacity){
    stack = (int*)malloc(capacity*sizeof(int));
    size = capacity;
}

void push(int num){
    if(top>=size-1){
        printf("stack overflow");
    }
    stack[++top] = num;
}

int pop(){
    if(top == -1){
        printf("stack underflow");
        return 0;
    }
    return stack[top--];
}

int peek(){
    if(top == -1){
        printf("stack underflow");
        return 0;
    }
    return stack[top];
}

int main(){
    makeStack(10);
    push(1);
    push(2);
    push(3);
    push(4);
    printf("%d\n",peek());
    pop();
    printf("%d\n",peek());
    pop();
    printf("%d\n",peek());

    return 0;
}


