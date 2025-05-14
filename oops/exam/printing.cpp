#include<iostream>
#include<math.h>

class Complex{
    int real,img;
    public : Complex(int i, int j){
        this->real = i;
        this->img = j;
    }
    
    void display(){
        std::cout<<this->real<<"+"<<this->img<<"i"<<std::endl;
    }

    friend void operator>(Complex& c1, Complex& c2);
};

void operator>(Complex& c1, Complex& c2){
    if(sqrt(c1.real*c1.real)>sqrt(c2.real*c2.real)){
        std::cout<<"c1 is greater than c2"<<std::endl;
    }
    else{
        std::cout<<"c1 is not greater than c2"<<std::endl;
    }
}

int main(){
    Complex c1(1,1);
    Complex c2(2,2);
    (c1>c2);
    return 0;
}