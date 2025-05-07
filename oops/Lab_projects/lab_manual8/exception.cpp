#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 0;
    if(b==0) throw runtime_error("Division by zero");
    try{
        int c = a/b;
        cout<<"The ans is "<<c<<endl;
    }catch(...){
        cout<<"there is some error "<<endl;
    }
}