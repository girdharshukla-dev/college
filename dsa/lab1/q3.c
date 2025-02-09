#include<stdio.h>
int main(){
    int x,y;
    printf("enter the two number x,y \n");
    scanf("%d%d",&x,&y);
    x = x+y;
    y=x-y;
    x=x-y;
    printf("x=%d\n",x);
    printf("y=%d",y);
    return 0;
}