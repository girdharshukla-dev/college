#include<stdio.h>

int stack[100];
int top=-1;

void push(int x){
    if(top == 100){
        printf("stack overflow");
    }
    else{
        top++;
        stack[top] = x;
        printf("pushed %d\n",x);
    }
}

int pop(){
    if(top == -1){
        printf("stack underflow");
        return 0;
    }
    else{
        int a = stack[top--];
        printf("removed the element %d\n",a);
        return a;
    }
}

int peek(){
    if(top == -1){
        printf("stack underflow");
        return -1;
    }
    else{
        printf("the element at top is %d",stack[top]);
        return stack[top];
    }
}

void display(){
    if(top == -1) printf("Stakck underflow");
    else{
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    peek();
    printf("\n");
    pop();
    peek();
    printf("\n");
    push(5);
    peek();
    printf("\nthe stack elements are ");
    display();
    return 0;    
}