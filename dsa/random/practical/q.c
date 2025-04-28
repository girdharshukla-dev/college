#include<stdio.h>
#define SIZE 5

int top = -1;
int rear = -1;
int arr[SIZE];

void push(int x){
    if(rear == SIZE-1){
        printf("Q overflow \n");
    }
    else if(top == -1 && rear ==-1){
        top++;
        rear++;
        arr[top] = x;
    }
    else{
        arr[++rear] = x;
    }
}

int pop(){
    if(top>rear || (top==-1 && rear == -1)){
        printf("Q underflow \n");
        return -1;
    }
    else{
        return arr[top++];
    }
}
int peek(){
    if(top>rear || (top==-1 && rear==-1)){
        printf("Q underlow");
    }
    else{
        return arr[top];
    }
}

void display(){
    if(top>rear || (top==-1 && rear==-1)){
        printf("Q underflow");
    }
    else{
        int i;
        if(top==-1) i = 0;
        else i=top;
        while(i<=rear){
            printf("%d -> ", arr[i++]);
        }
    }
    printf("\n");
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    push(6);
    pop();
    display();
    push(7);
    peek();
    display();
}
