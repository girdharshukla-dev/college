#include<iostream>

class Array{
    int *arr;
    public:
        Array(int size){
            arr = new int[size];
        }
        void display(){
            std::cout<<sizeof(arr)/sizeof(arr[0])<<std::endl;
        }
};

int main(){
    Array arr(10);
    arr.display();
    return 0;
}