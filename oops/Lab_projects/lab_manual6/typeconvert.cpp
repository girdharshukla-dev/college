#include<iostream>
#include<stdlib.h>

class A{
    int value;
    public:
        A(int val): value(val) {}
        operator int(){
            return value;
        }
        void display(){
            std::cout<<"Value in A class = "<<value<<std::endl;
        }

        void setValue(int value){
            this->value = value;
        }
        int getValue(){
            return this->value;
        }
};

class B{
    int data;
    public:
        B(int data): data(data) {}
        B(A obj){
            data = obj.getValue();
        }

        void display(){
            std::cout<<"the Data in B ="<<data<<std::endl;
        }
};

int main(){
    A obj = 10;
    int num = obj;
    std::cout<<"the value of num  = "<<num<<std::endl;
    obj.display();
    B obj2 = obj;
    obj2.display();
}