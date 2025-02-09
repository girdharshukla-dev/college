#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    cout<<"enter size of array : ";
    int size;
    cin>>size;
    int* arr = new int[size];
    cout<<"enter elements "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the current elements are "<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }

    cout<<"enter the position before you want to insert the element : ";
    int pos;
    cin>>pos;
    int num;
    cout<<"enter the element to  be inserted : ";
    cin>>num;
    size+=1;
    for(int i=size;i>=0;i--){
        if(i==pos){
            arr[i]=num;
        }
        else{
            arr[i]=arr[i-1];
        }
    }

    cout<<"the current elements are "<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }

    return 0;

}