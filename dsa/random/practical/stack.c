#include<stdio.h>
#define SIZE 5

int top = -1;
int arr[SIZE];

void push(int x){
    if(top == SIZE-1){
        printf("Stack overflow\n");
    }
    else{
        arr[++top] = x;
        printf("pushed %d\n",x);
    }
}

void peek(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("At top is %d \n",arr[top]);
    }
}

int pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        int a = arr[top];
        top --;
        printf("removed %d\n", a);
        return a;
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