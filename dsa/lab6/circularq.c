#include<stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;
int size = 0;

void enqueue(int x){
    if(front==-1 && rear==-1){
        front = 0;
        rear = 0;
        queue[rear] = x;
        size++;
        printf("pushed %d at %d index\n",x,rear);
    }
    else if(size == SIZE){
        printf("Stack Overflow \n");
    }
    else{
        rear = (rear+1)%SIZE;
        size++;
        queue[rear] = x;
        printf("pushed %d at %d index\n",x,rear);
    }
}

void dequeue(){
    if(size == 0){
        printf("Stack Underflow \n");
    }
    else{
        int a = queue[front];
        front = (front+1)%SIZE;
        size--;
        printf("Removed %d\n",a);
    }
}

int peek(){
    if(size==0){
        printf("stack underflow \n");
        return -1;
    }
    else{
        int a = queue[front];
        printf("element at front is %d\n",a);
        return a;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    dequeue();
    enqueue(6);
    return 0;
}