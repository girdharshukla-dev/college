#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int age;
    char grade;
};

int main(){
    struct Student* std = new Student();
    std->age=12;
    cout<<std->age;
    return 0;
}