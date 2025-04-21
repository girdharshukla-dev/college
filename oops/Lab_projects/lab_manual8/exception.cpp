#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 0;
    try{
        int c = a/b;
        cout<<"The ans is "<<c<<endl;
    }catch(...){
        cout<<"there is some error "<<endl;
    }
}