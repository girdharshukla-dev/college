#include<iostream>
#include<string>
using namespace std;

int print(){
    cout<<"in print method"<<endl;
    return 0;
}

int print(int a){
    cout<<"in print method with arguments "<<a<<endl;
    return 0;
}

int main(){
    print();
    print(2);
    return 0;
}