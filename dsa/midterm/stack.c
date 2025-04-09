#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int* arr;
    int top;
    int capacity;
} Stack;

Stack createStack(int capacity){
    Stack s;
    s.top = -1;
    s.arr = (int*)malloc(capacity * sizeof(int*));
    s.capacity = capacity;
    return s;
}

void push(Stack* stack , int num){
    if(stack->top==stack->capacity-1) printf("Stack overflow");
    else stack->arr[++stack->top]=num;
}

int pop(Stack* stack){
    if(stack->top == -1) printf("stack underflow");
    else return stack->arr[stack->top--];
}

int peek(Stack* stack){
    return stack->arr[stack->top];
}

int main(){
    Stack stack1 = createStack(5);
    Stack stack2 = createStack(6);
    push(&stack1,5);
    push(&stack1,4);
    push(&stack1,3);

    push(&stack2,10);
    push(&stack2,34);
    printf("%d\n",peek(&stack1));
    printf("%d\n",peek(&stack2));
    return 0;
}