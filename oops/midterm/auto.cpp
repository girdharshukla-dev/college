#include<iostream>
using namespace std;

inline void check(){
    cout<<"inside inline function ";
}

int main(){
    check();
    return 0;
}