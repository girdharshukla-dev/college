#include<iostream>
using namespace std;
 
class Complex{
    int real,img;
    public:
        Complex(int real, int img){
            this->real = real;
            this->img = img;
        }
    int getReal(){
        return this->real;
    }
    int getImg(){
        return this->img;
    }
    
    Complex operator+(Complex& obj){
        return Complex(real+obj.real,img+obj.img);
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(2,3);
    Complex sum = c1+c2;
    cout<<sum.getReal()<<" + i"<<sum.getImg()<<endl;
    return 0;
}