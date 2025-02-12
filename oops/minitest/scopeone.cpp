#include<iostream>
#include<string>
using namespace std;

class Check{
    public : 
    int x = 10;
    public :
    void display(){
        cout<<"inside the display function"<<endl;
    }
};

int main(){
    // Check obj;
    // int Check::*ptrvar = &Check::x;
    // void (Check::*ptrfunc)() = &Check::display;

    // cout<<"x ="<<obj.*ptrvar<<endl;
    // (obj.*ptrfunc)();
    // return 0;

    Check* obj = new Check();
    int Check::*ptrvar = &Check::x;
    void (Check::*ptrfunc)() = &Check::display;
    cout<<"the value of x  = "<<obj->*ptrvar<<endl;
    (obj->*ptrfunc)();
    return 0;
}