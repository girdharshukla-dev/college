#include<iostream>
using namespace std;

class Parent{
    public: void display(){
        cout<<"inside Parent class"<<endl;
    }
};

class Child:public Parent{
    public: void display(){
        cout<<"inside Child class "<<endl;
    }
};

int main(){
    Parent* parent = new Child();
    // Child* child = dynamic_cast<Child*>(parent);
    
    parent->display();

    return 0;
}
