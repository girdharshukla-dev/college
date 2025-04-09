#include <iostream>
using namespace std;

class A {
    int value;

public:
    // Constructor for int to class conversion
    A(int v) { value = v; }
    
    // Conversion operator for class to int conversion
    operator int() { return value; }
    
    // Getter for debugging
    void show() { cout << "Value: " << value << endl; }
};

class B {
    int data;

public:
    // Constructor
    B(int d) { data = d; }
    
    // Conversion constructor for class A to class B conversion
    B(A obj) { data = (int)obj; } 
    
    // Display function
    void display() { cout << "Data: " << data << endl; }
};

int main() {
    A objA = 10; // int to class A conversion
    objA.show();
    
    int x = objA; // class A to int conversion
    cout << "Converted to int: " << x << endl;
    
    B objB = objA; // class A to class B conversion
    objB.display();
    
    return 0;
}
