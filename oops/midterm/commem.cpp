#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public: Complex(int r, int i): real(r) , img(i) {}

        Complex operator+(Complex& complex){
          Complex ans(real+complex.real, img+complex.img);
          return ans;
        }

        void display(){
            cout<<this->real<<" + i"<<this->img<<endl;
        }
};

int main(){
    Complex c1(1,2);
    Complex c2(4,5);
    Complex ans = c1+c2;
    ans.display();
    return 0;      
}