#include<iostream>
using namespace std;

class Overload{
    int x;
    public: Overload(int x){
        this->x = x;
    }

    friend int operator*(Overload& obj);
};

int operator*(Overload& obj){
    return -(obj.x);
}

int main(){
    int a = 6;
    Overload ob(a);
    int ans = *ob;
    cout<<ans;
}