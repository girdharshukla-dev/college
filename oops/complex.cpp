#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    
    Complex(int r, int i) : real(r), imag(i) {}
    Complex operator+(const Complex& ot) {
        Complex k= Complex(real+ot.real, imag+ot.imag);
        return k;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(6,2);
    Complex c2(1,4);

    Complex sum = c1 + c2; 

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
