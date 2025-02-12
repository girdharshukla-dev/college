#include<iostream>
#include<string>
using namespace std;

class Parent{
    public : virtual void display(){
        cout<<"in parent class";
    }
};

class Child : public Parent{
    public: void display() override {
        cout<<"in child class";
    }
};

int main(){
    Parent* obj;
    Child child;
    obj = &child;
    obj->display();
    return 0;
}