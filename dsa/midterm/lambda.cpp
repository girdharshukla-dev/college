#include<iostream>
int main(){
    auto a = [](int a, int b){
        return a+b;
    }(1,2);
    int x = a;
    std::cout<<x;
}