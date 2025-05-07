#include<iostream>
using namespace std;

class A{
    int x , y;
    public : 
        A(int xa, int ya): x(xa), y(ya) {}
        operator int() const{
            return x;
        }
};

int main(){
    A a(23,2);
    int ans = a;
    cout<<ans;
    return 0;
}