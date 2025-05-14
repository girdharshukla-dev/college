#include<iostream>
class Parent {
    public : int* ptr;
    public:
        Parent(){
            ptr = new int;
            *ptr = 10;
        }
        ~Parent(){
            delete ptr;
        }
};

class Child : public Parent{};

int main(){
    Child child;
    std::cout<<*child.ptr;
    return 0;
}