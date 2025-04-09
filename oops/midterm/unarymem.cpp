#include<iostream>
using namespace std;

class Unary{
    int num;
    public: Unary(int num): num(num) {}
    public : int operator+(){
        return -(num);
    }
};

int main(){
    Unary check(1);

    cout<<+check<<endl;

    return 0;
}s