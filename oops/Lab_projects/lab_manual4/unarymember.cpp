#include<iostream>
using namespace std;

class Overload{
    int x;
    public : Overload(int a): x(a) {}

    int operator-(){
        Overload obj(x);
        return -(obj.x);
    }
};

int main(){
    int x = 5;
    Overload obj(x);
    cout<<-obj;
    return 0;
}