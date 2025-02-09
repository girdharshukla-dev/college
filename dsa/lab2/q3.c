#include<stdio.h>

void insert(char str1[1000], char str2[1000], int pos){
    int i=0;
    while(str1[i]!=pos){
        i++;
    }
    int k=0;
    int temp=i;
    while(str2[k]!='\0'){
        str1[i++]=str2[k++];
    }
    while(str1[temp]!='\0'){
        str1[i++]=str1[temp];
        temp++;
    }

    printf("%s",str1);
}

int main(){
    char str1[1000];
    char str2[1000];
    printf("enter original string \n");
    scanf("%s",&str1);
    printf("enter the substring \n");
    scanf("%s",&str2);
    int pos;
    printf("enter the position where the substring is tp be inserted \n");
    scanf("%d",&pos);
    insert(str1,str2,pos);
    return 0;
}