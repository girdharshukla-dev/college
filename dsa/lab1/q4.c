#include<stdio.h>
int main(){
    float tempf;
    printf("enter temp in farenheit");
    scanf("%f",&tempf);
    float tempc;
    tempc = (5*(tempf-32))/9;
    printf("\ntemp in celsius %f",tempc);
    return 0;
}