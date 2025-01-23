#include<stdio.h>
#include<math.h>
int main(){
    int princ;
    float rate;
    int time;
    printf("enter principal ");
    scanf("%d",&princ);
    printf("enter rate ");
    scanf("%f",&rate);
    printf("enter time ");
    scanf("%d",&time);
    float si = (princ * rate * time)/100;
    float comp = princ*pow((1+rate/100),time) - princ;
    printf("simple interest %f",si);
    printf("compound interest %f",comp);
    return 0;
}