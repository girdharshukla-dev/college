#include<iostream>

int divide(int a, int b){
    if(b==0){
        throw std::runtime_error("Divide by zero babu...");
    }
    return a/b;
}

int main(){
    int a,b;
    a=1;
    b=0;
    try{
        int ans = divide(a,b);
    }catch(std::exception& e){
        std::cout<<"Some error here "<<e.what()<<std::endl;
    }
    return 0;
}