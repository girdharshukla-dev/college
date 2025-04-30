#include<stdio.h>
#include<string.h>
#define SIZE 1000

int top = -1;
char arr[SIZE];

void push(int x){
    if(top == SIZE-1){
        printf("Stack overflow\n");
    }
    else{
        arr[++top] = x;
    }
}

int peek(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        return arr[top];
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

int isOpe(char ch){
    return (ch=='*' || ch=='+' || ch=='-' || ch=='^' || ch=='/');
}
int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '^') {
        return 3;
    }
    return 0;
}

void infixToPost(char* infix , char* postfix){
    int k=0;
    for(int i=0;i<strlen(infix);i++){
        char ch = infix[i];
        if(!isOpe(ch)) postfix[k++] = ch;
        else{
            while(top!=-1 && precedence(peek())>=precedence(ch)){
                char temp = pop();
                postfix[k++] = temp;
            }
            push(ch);
        }
    }

    while(top!=-1){
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
}
int main(){
    char infix[] = "A+B*(C^D-E)^(F+G*H)-I";
    char postfix[SIZE];
    infixToPost(infix, postfix);
    printf("%s", postfix);
    return 0;
}