#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int c = 0;
    for(int i=1;i<=(int)(sqrt(n));i++){
        if(n%i==0) c+=2;
        if(c>2) break;
    }
    if(c==2) printf("prime");
    return 0;
}