#include<stdio.h>
#include<iostream>
using namespace std;

//this program will demonstrate call by reference by the example of swapping 2 numbers

int main(){
    int a,b;
    cout<<"enter the value of a \n";
    cin>>a;
    cout<<"enter the value of b \n";
    cin>>b;
    swap(a, b);
    cout<<"the values after swap \n";
    cout<<"a after swap = "<<a<<endl;
    cout<<"b after swap = "<<b<<endl;
    return 0;
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
