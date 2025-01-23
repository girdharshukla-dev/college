#include<stdio.h>
int main(){
    int x1,y1,x2,y2;
    printf("enter the parts of 1st complex number");
    scanf("%d %d",&x1,&y1);
    printf("enter the parts of 2nd complex number");
    scanf("%d %d",&x2,&y2);
    int x = x1+x2;
    int y = y1+y2;
    printf("%d + %di",x,y);
    return 0;
    
}