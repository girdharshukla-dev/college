#include<iostream>
#include<math.h>
using namespace std;

class A{
    public:
        int x,y; 
        A(int xa, int ya): x(xa) , y(ya) {}
};

class B{
    
    public:
        int sum;
        B(int summation){
            this->sum = summation;
        }
        B(const A& a){
            sum = a.x + a.y; 
        }
        operator int() const{
            return sum;
        }
};

int main(){
    A a(4,5);
    B b = a;
    int ans = b;
    cout<<ans;
    return 0;

}