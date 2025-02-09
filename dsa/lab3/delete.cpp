#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    int* arr = new int[size];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the current elements are : "<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }
    int pos;
    cout<<"enter the pos where you want to delete the element "<<endl;
    cin>>pos;

    for(int i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    cout<<"the current elements are : "<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<" : "<<arr[i]<<endl;
    }

    return 0;
    delete[] arr;
}