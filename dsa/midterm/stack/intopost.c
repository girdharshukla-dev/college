#include<stdio.h>
#include<string.h>
#include<ctype.h>


char stack[1000];
int top = -1;
int size = 1000;

void push(char num){
    if(top == size-1){
        printf("stack overflow");
    }
    stack[++top] = num;
}

char pop(){
    if(top == -1){
        printf("stack underflow");
        return 0;
    }
    return stack[top--];
}

char peek(){
    if(top==-1){
        printf("stack underflow");
        return 0;
    }
    return stack[top];
}

int precedence(char a){
    if(a=='^') return 3;
    else if(a=='*' || a=='/') return 2;
    else if(a=='+' || a=='-') return 1;
    return 0;
}

int main(){

    char arr[] = "A+B*(C-D)/E^F+G*H";
    int len = strlen(arr);
    char ans[len];
    int j = 0;
    int i;
    for(i=0;i<len;i++){
        char ch = arr[i];
        if(isalnum(ch)){
            ans[j++] = ch;
        }
        else{
            if(ch == '(') push(ch);
            else if(ch == ')' && top!=-1){
                while(peek()!='(') ans[j++]=pop();
                pop();
            }
            else{
                if(top!=-1 && precedence(ch) > precedence(peek())) push(ch);
                else{
                    while(top!=-1 && precedence(ch)<=precedence(peek())) ans[j++]=pop();
                    push(ch);
                }
                
            }
        }
    }
    while(top != -1){
        ans[j++] = pop();
    }

    printf("%s",ans);
    return 0;

}