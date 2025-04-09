#include<iostream>
#include<stdlib.h>

class A{
    int value1;
    int value2;
    public:
        A(int val1, int val2): value1(val1), value2(val2) {}
        A(int val): value1(val) {}
        operator int(){
            return value1;
        }
        void display(){
            std::cout<<"Value1 in A class = "<<value1<<std::endl;
        }

        void setValue1(int value1){
            this->value1 = value1;
        }
        int getValue1(){
            return this->value1;
        }
};

class B{
    int data;
    public:
        B(int data): data(data) {}
        B(A obj){
            data = obj.getValue1();
        }

        void display(){
            std::cout<<"the Data in B ="<<data<<std::endl;
        }
};

int main(){
    A obj = 10;
    obj.display();
    B obj2 = obj;
    obj2.display();
}