#include<iostream>
using namespace std;

class Overl{
    int num;
    public: Overl(int x) : num(x) {}
    friend int operator+(Overl& overl);
};

int operator+(Overl& overl){
    return -(overl.num);
}

int main(){

    Overl over(4);
    cout<<+over<<endl;

    return 0;
}

