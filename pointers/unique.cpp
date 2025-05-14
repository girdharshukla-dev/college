#include<iostream>
#include <memory>

int main(){
    // std::unique_ptr<int> ptr = std::make_unique<int>(20);

    int* raw_ptr = new int(10);
    std::unique_ptr<int> ptr(raw_ptr);  //this unique pointer takes the ownership of the raw ptr

    std::cout<<*raw_ptr;

    return 0;
}