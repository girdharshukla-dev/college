#include<stdio.h>
#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(rear == SIZE-1){
        printf("Stack overflow\n");
    }
    else if(front == -1 && rear ==-1){
        front++;
        rear++;
        queue[rear] = x;
        printf("pushed %d \n",x);
    }
    else{
        ++rear;
        queue[rear] = x;
        printf("pushed %d \n",x);
    }
}

void dequeue(){
    if(front>rear || rear==-1){
        printf("Stack underflow , cannot delete \n");
    }
    else{
        int a = queue[front];
        front++;
        printf("Removed %d \n",a);
    }
}

int peek(){
    if(rear == -1 || front>rear){
        printf("Stack underflow\n");
    }
    else{
        int a = queue[front];
        printf("the element at front is %d\n",a);
        return a;
    }
}

void display(){
    if(rear==-1 || front>rear){
        printf("Stack underflow\n");
    }
    else{
        printf("the elements from front to rear are \n");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    peek();
    dequeue();
    dequeue();
    dequeue();
    enqueue(100);
    enqueue(200);
    peek();
    display();
    return 0;
}
