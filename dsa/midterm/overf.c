#include<stdio.h>
static int x = 0;
void cycle(){
    printf("%d      ",x);
    x++;
    cycle();
}

int main(){
    
    cycle();
    printf("%d",x);
}