#include<iostream>
using namespace std;

class A{
    public: 
        A(){
            cout<<"A's constructor"<<endl;
        }
};

class B:virtual public A{
    public:
        B(){
            cout<<"B's constructor"<<endl;
        }
};

class C : virtual public A{
    public:
    C(){
        cout<<"C's constructor"<<endl;
    }
};

class D : public B , public C{
    public :
        D(){
            cout<<"D's constructor"<<endl;
        }
};

int main(){
    D d;
    return 0;
}