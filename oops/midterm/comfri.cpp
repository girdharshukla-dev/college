#include<iostream>
using namespace std;

class Overload{
    int real, img;
    public: Overload(int r, int i): real(r) , img(i) {}

    friend Overload operator+(Overload& over1, Overload& over2);
    
    friend class Display;
};

Overload operator+(Overload& over1, Overload& over2){
    return Overload(over1.real+over2.real, over1.img+over2.img);
}

class Display{
    public:void show(Overload& over){
        cout<<over.real<<" + i"<<over.img;
    }
};

int main(){
    Overload over1(1,4);
    Overload over2(2,6);
    Overload ans = over1+over2;
    Display display;
    display.show(ans);
    return 0;
}