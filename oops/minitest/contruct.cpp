#include<iostream>
#include <string>
using namespace std;

class Check{
    public : 
       int age;
       string name;

       Check(int a, string n){
        this->age = a;
        this->name = n;
       }
};

int main(){
    Check check(10 ,"girdhar");
    cout<<check.age<<" "<<check.name<<endl;
    return 0;
}