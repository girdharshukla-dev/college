#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public: Complex(int real, int img){
        this->real = real;
        this->img = img;
    }
    int getReal(){
        return this->real;
    }
    int getImg(){
        return this->img;
    }
    
    friend Complex operator+(Complex& c1, Complex& c2);
};

Complex operator+(Complex& c1, Complex& c2){
    Complex ans(0,0);
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    return ans;
}

int main(){
    Complex c1(1,9);
    Complex c2(3,6);
    Complex ans = c1+c2;
    cout<<ans.getReal()<<" + i"<<ans.getImg()<<endl;
    return 0;
}