#include<iostream>
using namespace std;

struct Student{
    string name;
    int age;
    void display(){
        cout<<this->name<<endl;
    }
};

int main(){
    struct Student* std1 = new Student();
    std1->name = "girdhar";
    struct Student& st1 = *std1;
    struct Student* std2 = new Student();
    std2->name = "shukla";
    st1.display();
    std2->display();
    return 0;
}