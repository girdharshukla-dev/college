#include<iostream>
using namespace std;

class Parent{
    public: int x;
            Parent(int a) : x(a) {}
            void display(){
                cout<<"the value of x in Parent is "<<x<<endl;
            }
};

class Child:public Parent{
    public : int y1,y2;
            Child(int a, int y1, int y2) : Parent(a){
                this->y1 = y1;
                this->y2 = y2;
            }
            void display(){
                Parent::display();
                cout<<"The value of y1 in child is "<<y1<<endl;
                cout<<"The value of y2 in child is "<<y2<<endl;
            }
};

int main(){
    Child child(1,2,3);
    child.display();
    return 0;
}