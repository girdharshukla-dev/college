#include<stdio.h>
void toh(int n, char existing, char helper, char dest){
    if(n==0) return;
    toh(n-1, existing, dest, helper);
    printf("moved disk %d from %c to %c \n",n,existing,dest);
    toh(n-1,helper,existing,dest);
}

int main(){
    int n = 3;
    toh(n,'A','B','C');
    return 0;
}