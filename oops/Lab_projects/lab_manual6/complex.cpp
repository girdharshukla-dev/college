#include<iostream>
#include<stdlib.h>
using namespace std;

class Complex{
    int real,img;
    public:
        Complex(int real, int img): real(real), img(img) {}
        friend Complex operator+(Complex& c1, Complex& c2);
        friend Complex operator-(Complex& c1, Complex& c2);
        friend Complex operator*(Complex& c1, Complex& c2);
        void setReal(int real){ this->real = real; }
        int getReal(){ return this->real; }
        void setImg(int img){ this->img = img; }
        int getImg(){ return this->img; }
        void display(){
            cout<<real<<"+ i"<<img<<endl;
        }
};

Complex operator+(Complex& c1, Complex& c2){
    return Complex(c1.real+c2.real, c1.img+c2.img);
}

Complex operator-(Complex& c1, Complex& c2){
    return Complex(c1.real-c2.real, c1.img-c2.img);
}

Complex operator*(Complex& c1, Complex& c2){
    return Complex(((c1.real*c2.real)-(c1.img*c2.img)), (c1.real*c2.img + c1.img*c2.real));
}

int main(){
    int real1,real2,img1,img2;
    cout<<"Enter the real and imaginary value of c1"<<endl;
    cin>>real1;
    cin>>img1;
    Complex c1(real1,img1);

    cout<<"Enter the real and imaginary value of c2"<<endl;
    cin>>real2;
    cin>>img2;
    Complex c2(real2,img2);

    cout<<"Enter + for addition , - for subtraction , * for multiplication "<<endl;
    char ch;
    cin>>ch;
    Complex ans(0,0);
    switch(ch){
        case '+': 
        ans = c1+c2;
        break;

        case '-':
        ans = c1-c2;
        break; 

        case '*':
        ans = c1*c2;
        break;

        default:
            cout<<"Wrong input ......."<<endl;
    }

    cout<<"The answer is ";
    ans.display();
    return 0;
}