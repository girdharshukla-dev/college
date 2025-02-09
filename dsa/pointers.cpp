#include<stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    Node* next;
};

int main(){
    int arr[]={1,2,3,4,5,6,7};
    Node* head = (Node*)malloc(sizeof(Node));
    head->val = arr[0];
    head->next = NULL;
    Node* current = head;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        Node* temp = (Node*)malloc(sizeof(Node));
        temp->val = arr[i];
        temp->next = NULL;
        current->next = temp;
        current = temp;
    }

    Node* temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->val);
        temp=temp->next;
    }
    return 0;

}
