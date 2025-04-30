#include<stdio.h>
#define SIZE 5

int top = -1;
int rear = -1;
int size = 0;
int arr[SIZE];

void push(int x){
    if(size == SIZE){
        printf("Stack overflow \n");
    }
    else{
        rear = (rear+1)%SIZE;
        size++;
        arr[rear] = x;
    }
}

void pop(){
    if(size==0){
        printf("Stack underflow\n");
    }
    else{
        top = (top+1)%SIZE;
        size--;
    }
}

void display(){
    if(size == 0){
        printf("Stack underflow \n");
    }
    int i = top==-1?0:top;
    int c = 0 ;
    while(c<size){
        printf("%d->", arr[i%SIZE]);
        i =(i+1)%SIZE;
        c++;
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
    display();
}
